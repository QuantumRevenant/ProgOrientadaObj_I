//Implementar la clase alumno.h
#include"alumno.h"
Alumno::Alumno(int codigo,string nombre,int nota)
{
	this->codigo=codigo;
	this->nombre=nombre;
	this->nota = nota;
}
Alumno::Alumno()
{
	
}
int Alumno::getCodUsuario()
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
void Alumno::setCodigo(int codigo)
{
	this->codigo = codigo;
}
void Alumno::setNombre(string nombre)
{
	this->nombre = nombre;
}
void Alumno::setNota(int nota)
{
	this->nota = nota;
}
