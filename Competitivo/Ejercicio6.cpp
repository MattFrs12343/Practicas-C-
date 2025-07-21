#include <bits/stdc++.h>
using namespace std;
/*1, 7, 10, 13, 19, 23, 28, 31, 32, 44,
49, 68, 70, 79, 82, 86, 91, 94, 97, 100,
103, 109, 129, 130, 133, 139, 167, 176, 188, 190,*/
bool Esfeliz(int n)
{   //12
    unordered_set<int> v;
    while(n!=1 && !v.count(n))
    {
        v.insert(n);//1
        int sumcuadrado=0;
        while (n>0)
        {
            int digito=n%10;
            sumcuadrado+= digito*digito;//1 
            n/=10;
        }
        n=sumcuadrado;//1
    }
    return n==1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            cout<< "*" << "\n";
            continue;
        }
            int cont=0;
            int sum=0;
            int NumActual = 1;
            while (cont<n)
            {
                if(Esfeliz(NumActual))
                {
                    sum+=NumActual;
                    cont++;
                }
                NumActual++;
            }
            cout<<sum<<"\n";
    }   
    cout<<endl;
    return 0;
}
