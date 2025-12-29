#include <bits/stdc++.h>
using namespace std;
bool Isograma(string x){
    if(x==""){
        return true;
    }
    else{
        char z=x[0];
        string resto = x.substr(1);
        if(resto.find(z) != string::npos){
            return false;
        }
        return Isograma(resto);
    }
}
int main()
{
    string palabra;
    cout<< "Ingrese la palabra"<<"\n";
    cin>> palabra;
    cout<< Isograma(palabra)<< "\n";
    return 0;
}
