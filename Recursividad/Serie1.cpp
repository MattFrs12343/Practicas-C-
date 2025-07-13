#include <iostream>
using namespace std;
int Serie1(int x)
{
	int t;
	if (x<=1) {
        t=2;
	}
	else
	{
       if(x%2==0)
       {
            t=Serie1(x-1)+1;
       }
       else
       {
            t=Serie1(x-1)*2;
       }
		
	}
	return t;
}
int main()
{   
    int n, res;
    cout<<"Ingrese n terminos: " "\n";
    cin>>n;
    res = Serie1(n);
    cout<<"El resultado es: "<<res;

    return 0;
}