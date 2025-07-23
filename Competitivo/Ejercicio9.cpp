#include <bits/stdc++.h>
using namespace std;
int GeneraCeros(int n) {
    int mitad;
    if (n % 2 != 0) {
        mitad = (n + 1) / 2;
    } else {
        mitad = n / 2;
    }
    int r = 1;
    while (mitad--) {
        r *= 10;
    }
    return r;
}
int CuentaDigitos(int n){                   
    int cont=0;
    while (n>0)
    {
        n /= 10;
        cont++;
    }
    return cont;
}
bool EsKaprekar(int n){
    int cuadrado = CuentaDigitos(n*n);
    int mitad = GeneraCeros(cuadrado); 
    int der=(n*n)%mitad;
    int Izq = (n*n)/mitad;
    return(der+Izq==n);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n; cin>> n;
        
        cout<<(EsKaprekar(n) ? "Sela\n" : "Vek\n" );
    }
    return 0;
}
