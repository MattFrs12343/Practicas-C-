#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    vector<int>v(n); //dimension del vector 
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    set<int> vistos;
    for (int x : v){
        if(!vistos.count(x)){cout<<x; vistos.insert(x);} 
        
    }
    return 0;
}
