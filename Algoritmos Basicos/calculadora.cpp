#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b, res, num, sig=1;
    cout<<"Ingrese el primer valor: ";
    cin>>a;
    cout<<"Ingrese el segundo valor: ";
    cin>>b;
    while (sig!=0)
    {
        cout<<"Elegir la operacion a realizar: " "\n";
        cout<<"1. Suma" "\n";
        cout<<"2. Resta" "\n";
        cout<<"3. Multiplicacion" "\n";
        cout<<"4. Division" "\n";
        cin>>num;
        if (num==1)
        {
            res=a+b;
            cout<<"El resultado de la suma es: "<<res<< endl;
        }
        else if(num==2)
        {
            res=a-b;
            cout<<"El resultado de la resta es: "<<res<< endl; 
        }
        else if(num==3)
        {
            res=a*b;
            cout<<"El resultado de la multiplicacion es: "<<res<< endl; 
        }
        else if(num==4)
        {
            res=a/b;
            cout<<"El resultado de la división es: "<<res<< endl; 
        }
        else
        {
            cout<<"El numero de operacion seleccionado es invalido pruebe nuevamente del 1 al 4" "\n";            
        }
        cout<<"Si desea realiza otra operacion presione 1 sino 0" "\n";
        cin>>sig;        
    } 
    return 0;
}
