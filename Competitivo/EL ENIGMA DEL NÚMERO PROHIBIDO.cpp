///EL ENIGMA DEL NÚMERO PROHIBIDO///
#include <iostream>
using namespace std;
bool hay3(int n) {
    while (n > 0) {
        if (n % 10 == 3) return true;
        n /= 10;
    }
    return false;
}
int main()
{
    int t, contador=0;
    cin>>t ;
    for (int i = 1; i <= t; i++)
    {
        if (!hay3(i))
        {
            contador++;
        }
    }
    cout<< contador;
    return 0;
}
