#include <iostream>
#include <vector>
using namespace std;

vector<int> fuerzas(int n) {
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    return v;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;

    while(t--) 
    {
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> fuerzas(n);
        
    }

    return 0;
}
