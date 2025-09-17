#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr  (10);
    bool b1 = false, b2=false, b3=false, b4=false;
    for (int i = 0; i < 9; i++)
    {
        cin>>arr[i];
        if (arr[i] == 1) b1 = true;
        else if (arr[i] == 2) b2 = true;
        else if (arr[i] == 3) b3 = true;
        else if (arr[i] == 4) b4 = true;
    }
    if (b1 && b2 && b3 && b4)
        cout << "0";
    else
        cout << "1";
    return 0;
}
