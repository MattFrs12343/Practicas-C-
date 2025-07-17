#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, a, b;
    cin >> t;

    while (t--)
    {
        cin >> a >> b;
        long long s = 0;  // usar long long por si suma grande
        for (int i = a; i <= b; i++)
        {
            int x = i;
            while (x % 2 == 0)
            {
                x /= 2;  // dividir entre 2 mientras sea par
            }
            s += x;  // x es el máximo impar divisor
        }
        cout << s << "\n";
    }
    cout<<endl;
    return 0;
}
