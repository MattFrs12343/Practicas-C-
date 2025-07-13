#include <iostream>
using namespace std;
int Fibo(int x)
{
    if (x==0) return 0;
    if (x==1) return 1;
    return Fibo(x-1)+Fibo(x-2);
}
int main()
{   
    int n, res;
    cout<<"Ingrese n terminos: " "\n";
    cin>>n;
    for (int i = 1; i < n; i++)
    {
        res = Fibo(i);
    }
    cout<<"El resultado es: "<<res;
    
    return 0;
}
//         
// 0 1  1 2 3 5 8
// n = 5 