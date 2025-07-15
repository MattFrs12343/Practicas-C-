#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool EsVocal(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
int CantVocales(string x)
{
    int cv;
    if (x.empty()) {
        cv = 0;
    }
    else
    {
        char z = x[0];        // primer carácter
        x.erase(0, 1);        // eliminar primer carácter
        cv = CantVocales(x);  // llamada recursiva
        if (EsVocal(z)) {
            cv++;
        }
    }
    return cv;
}
int main() {
    string texto;
    cout << "Ingrese una cadena: ";
    getline(cin, texto);
    cout << "Cantidad de vocales: " << CantVocales(texto) << endl;
    return 0;
}