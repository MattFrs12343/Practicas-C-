#include <bits/stdc++.h>
using namespace std;
vector<int> llenado(int n) {
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    return v;
}
vector<int> Consultas(int q) {
    vector<int> v(q);
    for (int i = 0; i < q; i++) {
        cin >> v[i];
    }
    return v;
}
int mediana(int n) {
    if (n % 2 == 0)
        return (n + 2) / 2 - 1;
    else
        return (n + 1) / 2 - 1;
}
int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> arr = llenado(n);
        vector<int> cons = Consultas(q);
        int pos_med = mediana(n);
        for (int x : cons) {
            vector<int> b(n);
            for (int i = 0; i < n; i++) {
                b[i] = arr[i] % x;
            }
            sort(b.begin(), b.end());
            cout << b[pos_med]<<" ";
        }
        cout<<"\n";
    }
    cout<<endl;
    return 0;
}