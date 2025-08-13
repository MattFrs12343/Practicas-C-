#include <bits/stdc++.h>
using namespace std;

int burles(int n) {
    int min_1 = n; // caso peor: todas monedas de 1

    for (int mon_5 = 0; mon_5 <= n / 5; mon_5++) {
        for (int mon_3 = 0; mon_3 <= (n - 5 * mon_5) / 3; mon_3++) { 
            int paga = mon_5 * 5 + mon_3 * 3;

            if (paga <= n) {
                int mon_1 = n - paga;

                if (mon_1 < min_1) {
                    min_1 = mon_1;
                }
            }
        }
    }
    return min_1;
}
int main() {
    ios::sync_with_stdio(false), cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int a; 
        cin >> a;
        cout << burles(a) << "\n";
    }
    return 0;
}
