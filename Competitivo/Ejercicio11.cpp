//El desafio de los dragones 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);

    int t, cont = 0;
    cin >> t;
    while(t--)
    {
        int m;
        string cadena;
        cin >> m >> cadena; 
        cadena.erase(m-1,1);
        cont++;
        cout << cont << " " << cadena << "\n";
    }
    cout << endl;
    return 0;
}