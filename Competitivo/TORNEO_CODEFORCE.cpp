//Torneo Codeforce//

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
        int n, j, k, i=0;
        cin >> n >> j >> k;
        vector<int> v = fuerzas(n);

        for (int i=0; i<v.size();i++)
        {
            if (i != j && v[i] == v[j]) //Indices diferentes pero fuerzas iguales
            {
                v.erase(v.begin()+i);
                if(i<j)j--;
            }
            else if (i != j && v[i] < v[j])
            {
                v.erase(v.begin()+i);
                if(i<j)j--;
            }
            else if (i != j && v[i] > v[j])
            {
                v.erase(v.begin()+j);
                j=-1;
            }
        }
        if (v.size() <= k)
        {
            cout<< "YES\n";
        }
        else{
            cout<< "NO\n";
        } 
        
    }

    return 0;
}
/*
    
5 2 3
3 2 4 4 1
5 4 1
5 3 4 5 2
6 1 1
1 2 3 4 5 6
*/ 
