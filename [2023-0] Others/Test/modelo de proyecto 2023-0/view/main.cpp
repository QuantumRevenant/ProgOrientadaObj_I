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
		cod = aluController.getCorrelativo();
		cout<<"("<<cod<<")\n";
		cin.ignore();
		cout<<"Ingrese Nombre:";
		getline(cin,nom);
		cout<<"Ingrese Nota:";
		cin>>nota;
		
		//Crear el objeto
		Alumno objAlu(cod,nom,nota);
		aluController.add(objAlu);
		//Grabar en archivo
		aluController.grabarEnArchivo(objAlu);
		cout<<"Deseas agregar otro alumno(S/s):";
		cin>>flag;		
		
		system("cls");
	} 
	while(flag == "S" || flag=="s");
}
void buscar()
{
	int codigoABuscar;
	cout<<"Ingrese Codigo a Buscar:";
	cin>>codigoABuscar;
	Alumno obj = aluController.buscarPorCodigo(codigoABuscar); 
	if(obj.getNombre() == "error")
	{
	    cout<<"El codigo ingresado no existe!!!";
		system("pause");
	}
	else
	{
		cout<<"EL REGISTRO ENCONTRADO ES:\n";
		cout<<"Codigo:"<<obj.getCodUsuario()<<"\n";
		cout<<"Nombre:"<<obj.getNombre()<<"\n";
		cout<<"Nota:"<<obj.getNota()<<"\n";
		system("pause");
	}
	system("cls");
}
void eliminar()
{
	int cod;
	cout<<"Ingresar el codigo a eliminar:";
	cin>>cod;
	Alumno objAEliminar = aluController.buscarPorCodigo(cod); 
	if(objAEliminar.getNombre() != "error")
	{
		aluController.remove(objAEliminar);
		cout<<"Registro Eliminado Satisfactoriamente";
		aluController.grabarModificarEliminarArchivo();
	}
	else
	{
		cout<<"No se encontro el registro!\n";
	}	
}
void modificar()
{
	int cod;
	cout<<"Ingresar el codigo a modificar:";
	cin>>cod;
	Alumno objAModificar = aluController.buscarPorCodigo(cod);	
	
	cout<<"Registro Encontrado\n";
	cout<<"Codigo:"<<objAModificar.getCodUsuario()<<"\n";
	cout<<"Nombre:"<<objAModificar.getNombre()<<"\n";
	cout<<"Nota:"<<objAModificar.getNota()<<"\n";
	cin.ignore();
	
	string nomModificado;
	int notaModificar;
	cout<<"Modificar campos\n";
	cout<<"Nombre:";
	getline(cin,nomModificado);
	cout<<"Nota:";
	cin>>notaModificar;
	bool estado = aluController.modificar(objAModificar,nomModificado,notaModificar);	
	if(estado = true)
	{
		cout<<"Registro Modificado Satisfactoriamente\n";
		/*Grabar en archivo*/
		aluController.grabarModificarEliminarArchivo();
	}
	else
	{
		cout<<"No se Edito el registro!\n";
		system("pause");
		menuOpciones();
	}
	system("pause");
	system("cls");	
}
void listar()
{
	for(int i=0;i<aluController.size();i++)	
	{
		cout<<aluController.get(i).getCodUsuario()<<"\t"<<aluController.get(i).getNombre()
			<<"\t\t\t"<<aluController.get(i).getNota()<<endl; 
	}
}
