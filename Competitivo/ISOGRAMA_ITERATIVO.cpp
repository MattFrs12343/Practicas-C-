#include <bits/stdc++.h>
using namespace std;
bool Isograma(string x) {
    for (int i = 0; i < x.size(); i++) {       
        for (int j = i + 1; j < x.size(); j++) { 
            if (x[i] == x[j]) {   
                return false;     
            }
        }
    }
    return true; 
}
int main()
{
    string palabra;
    cout<< "Ingrese la palabra"<<"\n";
    cin>> palabra;
    cout<< Isograma(palabra)<< "\n";
    return 0;
}
