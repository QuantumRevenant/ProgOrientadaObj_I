#include <iostream>
#include "../controller/alumnocontroller.h"
using namespace std;
//Global
AlumnoController aluController;//Crear el objeto de la clase AlumnoController
/*Prototipos*/
void menuOpciones();
void adicionar();
void buscar();
void eliminar();
void modificar();
void listar();
/**/
int main(int argc, char *argv[]) {
	
	menuOpciones();
	
	return 0;
}
void menuOpciones()
{
	int opt;
	do
	{
		cout<<"--MENU DE OPCIONES----------\n";
		cout<<"--Adicionar Nuevo Alumno-[1]\n";
		cout<<"--Buscar-----------------[2]\n";
		cout<<"--Eliminar---------------[3]\n";
		cout<<"--Modificar--------------[4]\n";
		cout<<"--Listar-----------------[5]\n";
		cout<<"--Salir------------------[6]\n";
		cout<<"--Ingresar Opcion[1-6]:";
		cin>>opt;
		switch(opt)
		{  
		case 1:system("cls");adicionar();break;
		case 2:system("cls");buscar();break;
		case 3:system("cls");eliminar();break;
		case 4:system("cls");modificar();break;
		case 5:system("cls");listar();break;
		case 6:	cout<<"#####Gracias por usar nuestro servicio#####";break;
		default:cout<<"Ingrese una opcion valida[1-6]";
		}
	}
	while(opt!=6);
	
}
void adicionar()
{
	int 	cod,
			nota;
	string	nom;
	string 	flag;
	do
	{
		cout<<"Ingrese codigo:";
		cin>>cod;
		cin.ignore();
		cout<<"Ingrese Nombre:";
		getline(cin,nom);
		cout<<"Ingrese Nota:";
		cin>>nota;
		
		//Crear el objeto
		Alumno objAlu(cod,nom,nota);
		aluController.add(objAlu);
		cout<<"Deseas agregar otro alumno(S/s):";
		cin>>flag;
		
	} 
	while(flag == "S" || flag=="s");
}
void buscar()
{
	
}
void eliminar()
{
	
}
void modificar()
{
	
}
void listar()
{
	for(int i=0;i<aluController.size();i++)	
	{
		cout<<aluController.get(i).getCodigo()<<"\t"<<aluController.get(i).getNombre()<<"\t\t\t"<<aluController.get(i).getNota()<<endl; 
	}
}
