#include <iostream>
#include <string>
#include "../model/Grupo.cpp"

using namespace std;

/*
Grupo 40 calificaciones
Calificacion media y más baja
*/

float getValue(string);
void printData(string);

int main(int argc, char *argv[])
{
    int cantidad;
    float *calificaciones;

    cantidad=(int)getValue("la cantidad de notas: ");

    calificaciones=new float[cantidad];

    for(int i=0; i<cantidad;i++)
        *(calificaciones+i)=getValue("la nota #"+to_string(i+1));
    
    Grupo objGrupo(calificaciones,cantidad);

    printData("La Calificación Mayor es: "+to_string(objGrupo.getCalificacionMayor()));
    printData("La Calificación Media es: "+to_string(objGrupo.getCalificacionMedia()));
    printData("La Calificación Menor es: "+to_string(objGrupo.getCalificacionMenor()));

    objGrupo.~Grupo();
    delete calificaciones;


    return 0;
}

float getValue(string message)
{
    float salida;
    cout << "Introduce " << message << endl;
    cin >> salida;
    return salida;
}
 
void printData(string message)
{
    cout << message <<endl;
}