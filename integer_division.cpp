#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,ans;
    cin>>x;
    if (x<0)
    {
        ans = (abs(x)/10);
        cout<<ans*-1;
    }
    else
    {
        ans = x/10;
        cout<<fixed<<setprecision(2)<<ans;
    }
    return 0;
}