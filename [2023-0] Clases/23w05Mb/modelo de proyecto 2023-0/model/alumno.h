#ifndef __ALUMNO_H__
#define __ALUMNO_H__
using namespace std;
class Alumno
{
private:
	int 	codigo;
	string 	nombre;
	int		nota;
public:
	Alumno(int,string,int);
	int 	getCodUsuario();
	string 	getNombre();
	int		getNota();
};
#endif
