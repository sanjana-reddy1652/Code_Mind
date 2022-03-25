#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp,ans=0,rem;
    cin>>n;
    temp=abs(n);
    while(temp)
    {
        rem=temp%10;
        ans=ans*10+rem;
        temp=temp/10;
    }
    if(n<0)
    {
        cout<<ans*-1;
    }
    else
    cout<<ans;
    return 0;
}