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
<<<<<<< HEAD:Competitivo/UPC_E.cpp
    cout << (capicua(a) ? "true" : "false") << endl;
=======
    cout << (!palindrome(a) ? "true" : "false") << endl;
>>>>>>> f58eaa196b2d17a42460810c074fbcaf33f86789:Competitivo/UPC_C.cpp
    return 0;
}
