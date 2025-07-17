#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); //
    cin.tie(nullptr);

    int t;
    cin >> t;

    string res = ""; // Acumulador de resultados

    while (t--)
    
    {
        string a, b;
        cin >> a >> b;

        if (a[0] == b[0] || a[1] == b[1])
            res += "RESUENA\n";
        else
            res += "SILENCIO\n";
    }

    cout << res << endl; // Solo una impresión al final (más eficiente)

    return 0;
}
