#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, n, t;
    cin>>t;
    
    while (t--)
    {
        cin>>x>>n;
        if(x % 2 == 0) 
            cout<< x<< "\n";
        else 
            cout<<"0"<<"\n";
    }
    
    return 0;
}

