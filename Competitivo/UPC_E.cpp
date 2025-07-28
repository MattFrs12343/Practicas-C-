#include <bits/stdc++.h>
using namespace std;

bool capicua(string x) {
    int n = x.length();
    for (int i = 0; i < n / 2; i++) {
        if (x[i] != x[n - 1 - i]) {
            return false;
        }
    }
    return true;
}
int main() {
    string a;
    cin >> a;
    cout << (capicua(a) ? "true" : "false") << endl;
    return 0;
}
//abccba//
//012345//
//6/2=3==>Iteracion//
//x[a] == x[a]