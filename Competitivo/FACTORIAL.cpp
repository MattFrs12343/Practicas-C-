#include <bits/stdc++.h>
using namespace std;
int Fact(int n){
    int f=1;
    for (int i = 1; i <= n; i++)
    {
        f*=i;
    }
    return f;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    { 
        int n;cin>>n;
        cout<<Fact(n)<<"\n"; 
    }
    cout<<endl;
    return 0;
}
