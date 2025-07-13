#include <iostream>
using namespace std;

int Suma(int n)
{
    int s, z;
    if(n == 0)         // ← corrección del caso base
        s = n;
    else
    {
        z = n % 10;
        n = n / 10;
        s = Suma(n) + z;
    }

    return s;          // ← corrección del valor retornado
}
int main()
{
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;

    int resultado = Suma(numero); // Llama a tu función
    cout << "Resultado final: " << resultado << endl;
}
   
