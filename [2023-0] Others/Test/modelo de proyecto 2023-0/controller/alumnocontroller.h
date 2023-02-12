#include <iostream>
#include"../model/alumno.cpp"
#include <vector>
#include<fstream>
using std::stoi;
using namespace std;
class AlumnoController
{
private:
	vector<Alumno> vectorAlumno;
public:
	AlumnoController();
	int		getCorrelativo();
	void 	add(Alumno obj);
	Alumno 	get(int pos);	
	int		size();
	Alumno  buscarPorCodigo(int codigo);
	void	grabarEnArchivo(Alumno obj);
	int 	getPostArray(Alumno obj);
	void 	remove(Alumno obj);
	bool	modificar(Alumno obj,string,int);
	void	grabarModificarEliminarArchivo();
	void	cargarDatosDelArchivoAlVector();
};

AlumnoController::AlumnoController()
{
	cargarDatosDelArchivoAlVector();		
}
int AlumnoController::getCorrelativo()
{
	if(size()==0)		
	{
		return 1;	
	}
	else
	{
		return vectorAlumno[size() - 1].getCodUsuario() + 1;
	}
}
void AlumnoController::add(Alumno obj)
{
	vectorAlumno.push_back(obj);
}
Alumno AlumnoController::get(int pos)
{
	return vectorAlumno[pos];
}
Alumno AlumnoController::buscarPorCodigo(int codigo)
{
	Alumno objError;
	objError.setNombre("error");
	for(int i=0;i<vectorAlumno.size();i++)
	{
		if(codigo == vectorAlumno[i].getCodUsuario())
		{
			return vectorAlumno[i];
		}
	}
	return objError;
}
int AlumnoController::size()
{
	return vectorAlumno.size();
}
int AlumnoController::getPostArray(Alumno obj)
{
	for(int i=0;i<size();i++)
	{
		if(obj.getCodUsuario() == get(i).getCodUsuario())
		{
			return i;
		}
	}
	return -1;
}

void AlumnoController::remove(Alumno obj)
{
	vectorAlumno.erase(vectorAlumno.begin() + getPostArray(obj));	
}
bool AlumnoController::modificar(Alumno obj,string nom,int nota)
{
	for(int i=0;i<size();i++)
	{
		if(obj.getCodUsuario() == get(i).getCodUsuario())
		{
			vectorAlumno[i].setNombre(nom);
			vectorAlumno[i].setNota(nota);
			return true;
		}
	}
	return false;
}
void AlumnoController::grabarEnArchivo(Alumno obj)
{
	try
	{
		fstream archivoAlumno;
		archivoAlumno.open("alumno.csv",ios::app);
		if(archivoAlumno.is_open())
		{
			archivoAlumno<<obj.getCodUsuario()<<";"<<obj.getNombre()<<";"<<obj.getNota()<<";"<<endl;
		}
		archivoAlumno.close();
	}
	catch(exception e)
	{
		cout<<"Ocurrio un error al momento de grabar en el archivo";
	}
}
void AlumnoController::grabarModificarEliminarArchivo()
{
	try
	{
		fstream archivoAlumnos;
		archivoAlumnos.open("alumno.csv", ios::out);
		if (archivoAlumnos.is_open())
		{
			for (Alumno x : vectorAlumno)
			{
				archivoAlumnos<<x.getCodUsuario()<<";"<<x.getNombre()<<";"<<x.getNota()<<";"<<endl;
				
			}
			archivoAlumnos.close();
		}
	}
	catch (exception e)
	{
		cout << "Ocurrio un error al grabar en el archivo";
	}
}
void AlumnoController::cargarDatosDelArchivoAlVector()
{
	try
	{
		int i;
		size_t posi;//Cantidad maxima
		string linea;
		string temporal[3];//Cantidad de columnas
		fstream archivoAlumno;
		archivoAlumno.open("alumno.csv", ios::in);
		if (archivoAlumno.is_open())
		{
			while (!archivoAlumno.eof() && getline(archivoAlumno, linea)) 
			{
					i = 0;
					while ((posi = linea.find(";")) != string::npos) 
					{/*string::npos es -1, termina cuando llega a este punto*/
						temporal[i] = linea.substr(0, posi);/*posi = Es la cantidad de caracteres antes del ;*/
						linea.erase(0, posi + 1);//borra la palabra de la primera posici�n encontrada   y con el +1 incluye hasta el ; y luego borra ese elemento, para que en la siguiente iteracion iniciar con la siguiente palabra y de ese modo seguir el proceso , 
						i++;
					}
					//Asignando los valores al vector
					Alumno alumno;
					alumno.setCodigo(std::stoi(temporal[0]));
					alumno.setNombre(temporal[1]);
					alumno.setNota(std::stoi(temporal[2]));
					add(alumno);
			}
		}
		archivoAlumno.close();
	}
	catch (exception e)
	{
		cout << "Ocurrio un error al leer el archivo";
	}
}
