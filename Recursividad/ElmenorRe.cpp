#include <iostream>
using namespace std;
int Elmenor(int x)
{
    int dm;
    if (x<10)
    {
        dm=x;
    }
    else
    {
        int z = x%10;
        x/=10;
        dm=Elmenor(x);
        if (dm>z)
        {
            dm=z;
        }
               
    }
    return dm;  
}
int main()
{   
    int n, res;
    cout<<"Ingrese n terminos: " "\n";
    cin>>n;
    res= Elmenor(n);
    cout<<"El resultado es: "<<res;

    return 0;
}
