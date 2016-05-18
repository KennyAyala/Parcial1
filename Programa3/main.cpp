#include <iostream>

using namespace std;
float exam,nota;
float NotaFinal;
/*Ingresa la nota acumulada y examen del alumno
y presentar la nota final.
*/
int main()
{
    cout<< "Ingresar Nota Acumulada:";
    cin>>nota;

    cout<< "Ingresa Nota Examen";
    cin>>exam;

    NotaFinal= nota+exam;
    cout<<"Nota Final..."<<NotaFinal<<"\n";
if(NotaFinal>=60)
{
    cout<<"Aprobado";//True

}
    else
{
    cout<<"Reprobado";//False

}
cout<<"\n";
return 0;
}
