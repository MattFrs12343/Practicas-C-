#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a=0, b=1, c=0, t;
    cout<<"Ingrese los n terminos de la serie: ";
    cin>>t;

    cout<<"La serie es: ";
    for (int i = 1; i <= t; i++)
    {
        cout<< a << "";
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
