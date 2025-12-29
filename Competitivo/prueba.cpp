#include <bits/stdc++.h>
using namespace std;

string consonantes = "mtlsMTLS";
string vocales     = "aeiouAEIOU";

string FiltrarCadenaRec(const string &cad, int i) {
    if (i >= (int)cad.size()) return "";  // caso base

    char c = cad[i];

    // si es vocal y está antes de m,t,l,s -> la ignoro
    if (vocales.find(c) != string::npos && i + 1 < (int)cad.size()) {
        char siguiente = cad[i + 1];
        if (consonantes.find(siguiente) != string::npos) {
            return FiltrarCadenaRec(cad, i + 1); // saltar la vocal
        }
    }

    return string(1, c) + FiltrarCadenaRec(cad, i + 1);
}

int main() {
    string texto;
    cout << "Ingresa texto: ";
    getline(cin, texto);

    cout << "Resultado: " << FiltrarCadenaRec(texto, 0) << endl;
    return 0;
}


