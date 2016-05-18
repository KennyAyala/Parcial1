#include <iostream>

using namespace std;
int horas,pagohoras;
float pagot;
/*ingresas las horas, el pago por hora
luego calcular el pago total
*/
int main()
{
    cout << "Ingresar las horas";
    cin>>horas;

    cout<<"Ingresar pago por horas";
    cin>>pagohoras;


    pagot= horas * pagohoras;
    cout<<"Pago total...>"<<pagot<<"\n";
}
