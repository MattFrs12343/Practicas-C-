#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector <int> v;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<"\n";
    }
    return 0;
}
