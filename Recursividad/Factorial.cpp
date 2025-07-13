#include <iostream>
using namespace std;
int Factorial(int x)
{
	int fact;
	if (x==0) {
		fact=1;
	}
	else
	{
       
		fact= x * Factorial (x-1);
	}
	return fact;
}
int main()
{   
    int n, res;
    cout<<"Ingrese n terminos: " "\n";
    cin>>n;
    res = Factorial(n);
    cout<<"El resultado es: "<<res;

    return 0;
}