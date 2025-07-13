#include <iostream>
using namespace std;
bool VerifOrd(int x)
{
	bool Esta;
	if (x<10) {
		Esta=true;
	}
	else
	{

	   int ult= x%10;      //Saca el ultimo
	   int ant= (x%100)/10; //Saca el antepenultimo

	   if (ant>=ult) {
		   Esta=VerifOrd(x/10);
	   }
	   else
		Esta=false;

	}
	return Esta;
}
int main()
{   
    int n, res;
    cout<<"Ingrese n terminos: " "\n";
    cin>>n;
    res= VerifOrd(n);
    cout<<"El resultado es: "<<res;

    return 0;
}