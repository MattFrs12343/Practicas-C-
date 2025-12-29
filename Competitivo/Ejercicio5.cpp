#include <bits/stdc++.h>
using namespace std;

bool EsPalindrome(string s, int a, int b) {
    if (a >= b) return true;
    if (s[a] != s[b]) return false;
    return EsPalindrome(s, a + 1, b - 1);
}

string Concat(string s) {
    if (EsPalindrome(s, 0, s.size()-1))
        return s;
    
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (EsPalindrome(s, i, n-1)) {
            string agregar = s.substr(0, i);
            reverse(agregar.begin(), agregar.end());
            return s + agregar;
        }
    }
    return s;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string palabra;
    while (cin >> palabra && palabra!="END") {
        string resultado = Concat(palabra);
        cout << resultado << "\n";
    }
    return 0;
}
