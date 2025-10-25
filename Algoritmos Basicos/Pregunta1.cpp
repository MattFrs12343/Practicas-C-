#include <iostream>
using namespace std;
int main()
{
    int n=0, cont=0, suma=0, mayor=0, menor=0; float pro=0;
    while (true)
    {
        cin>>n;
        if (n<0)
        {
            break;
        }
        suma+=n;
        cont++;
        if (cont == 1) {
            mayor = menor = n;
        } else {
            if (n > mayor) mayor = n;
            if (n < menor) menor = n;
        }
    }
    if (cont>0)
    {
        pro=suma/cont;
    }
    cout << cont << "\n";
    cout << pro << "\n";
    cout << mayor << "\n";
    cout << menor << "\n";

    return 0;
}
