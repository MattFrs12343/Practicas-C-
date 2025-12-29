#include <bits/stdc++.h>
using namespace std;

vector<int> dato;

bool Esta(int elem) {
    for (size_t i = 0; i < dato.size(); i++) { 
        if (dato[i] == elem) {
            return true;
        }
    }
    return false; 
}

void restaurantes(int n) {  // void en lugar de int
    for (int i = 1; i <= n; i++) {
        if (!Esta(i)) {
            cout << i << "\n";
            return;
        }
    }
}

int main() {
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    dato.push_back(a);
    dato.push_back(b);
    dato.push_back(c);
    dato.push_back(d);
    
    restaurantes(5);
    
    return 0; 
}