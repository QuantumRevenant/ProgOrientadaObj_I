//Implementar la clase alumno.h
#include"alumno.h"
Alumno::Alumno(int codigo,string nombre,int nota)
{
	this->codigo=codigo;
	this->nombre=nombre;
	this->nota = nota;
}
int Alumno::getCodigo()
{
	return this->codigo;
}
string Alumno::getNombre()
{
	return this->nombre;
}
int Alumno::getNota()
{
	return this->nota;
}
