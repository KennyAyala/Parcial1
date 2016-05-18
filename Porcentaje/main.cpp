#include <iostream>
#include <stdlib.h>
#include <stdint.h>

using namespace std;

int main()
{int numero;
    cout << "Ingresar un numero";
    cin>> numero;
    if (numero % 5==0)
    {
        cout<<"Numero divisible entre 5";

    }
    else {
        cout<<"Numero no Divisible entre 5";
    }
cout<<"\n";
system("PAUSE");
    return 0;
}
