#include <bits/stdc++.h>
using namespace std;

bool palindrome(string x) {
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
    cout << (!palindrome(a) ? "true" : "false") << endl;
    return 0;
}
