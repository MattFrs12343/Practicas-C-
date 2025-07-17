#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int casos; 
    cin >> casos;

    for (int i = 0; i < casos; i++) {
        string cad; 
        cin >> cad;

        int n = stoi(cad);
        int r = (int) sqrt(n);

        if (r * r == n)
            cout << "0 " << r << "\n";
        else
            cout << "-1\n";
    }
    cout<< endl;
    return 0;
}