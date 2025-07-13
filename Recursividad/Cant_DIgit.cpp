#include <iostream>
using namespace std;
int CantDigit(int x)
{   int n;
    if (x<10)
    {
        n=1;
    }
    else    
    {
        x/=10;
        n=CantDigit(x)+1;        
    }
    return n;
}
int main()
{   
    int n, res;
    cout<<"Ingrese n terminos: " "\n";
    cin>>n;
    res= CantDigit(n);
    cout<<"El resultado es: "<<res;

    return 0;
}