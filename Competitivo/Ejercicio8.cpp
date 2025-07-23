#include <bits/stdc++.h>
using namespace std;
int Mod(int n) {
    int r=1;
    while (n--) r*=10;
    return r;
}
int cont(int n){                   
    int cont=0;
    while (n>0)
    {
        n /= 10;
        cont++;
    }
    return cont;
}
bool EsEterno(int n){
    int digito = cont(n);
    int mod = Mod(digito);
    return ((n * n) % mod == n);
    
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
        
        cout<<(EsEterno(n) ? "Eterno\n" : "Efimero\n" );
    }
    return 0;
}
