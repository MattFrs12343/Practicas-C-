#include <bits/stdc++.h>
using namespace std;
int validacion(int n){
    if(n==4){
        return 3;
    }
    else if(n==3){
        return 5;
    }
    return -1;
}
int ContarNum(int n){
    int cont=0;
    while (n>0)
    {
        n/=10;
        cont++;
    }
    return cont;
}
int Pot(int base, int exp){
    int res = 1;
    while (exp--) res *= base;
    return res;
}

int SumBases(int n){
    int num = ContarNum(n);
    int base = validacion(num);
    int suma = 0;
    for (int i = num-1; i >= 0; i--) {
        int dig = n / Pot(10, i) % 10;
        suma += dig * Pot(base, i);
    }
    return suma;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    int total = 0;
    while (t--){
        int n;
        cin >> n;
        total += SumBases(n); 
    }
    cout << total << "\n";
    return 0;
}