#include <iostream>
using namespace std;

int fibo(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main()
{
    int t; bool b=true;
    cout << "Ingrese los n terminos de la serie: ";
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        if (b)
        {
           cout<< " + " << i << "/" << fibo(i-1);
           b=!b;
        }
        else
        {
           cout<< " - " << i << "/" << fibo(i-1);
           b=!b;             
        }          
    }

    
    return 0;
}
