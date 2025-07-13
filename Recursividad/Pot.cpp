#include <iostream>
using namespace std;
int Potencia(int x, int n)
{   int pot;
	if (n==0) {
		pot=1;
	}
	else
	{
		pot = x*Potencia(x, n-1);
	}
	return pot;
}
int main()
{   
    int n, x,  res;
    cout<<"Ingrese n base: " "\n";
    cin>>x;
    cout<<"Ingrese la potencia: " "\n";
    cin>>n;
    res= Potencia(x, n);
    cout<<"El resultado es: "<<res;

    return 0;
}