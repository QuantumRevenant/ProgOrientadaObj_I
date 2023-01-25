#include <iostream>
#include"../model/alumno.cpp"
#include <vector>
using namespace std;
class AlumnoController
{
private:
	vector<Alumno> vectorAlumno;
public:
	AlumnoController();
	void 	add(Alumno obj);
	Alumno 	get(int pos);	
	int		size();
};

AlumnoController::AlumnoController()
{
	
}
void AlumnoController::add(Alumno obj)
{
	vectorAlumno.push_back(obj);
}
Alumno AlumnoController::get(int pos)
{
	return vectorAlumno[pos];
}
int AlumnoController::size()
{
	return vectorAlumno.size();
}
