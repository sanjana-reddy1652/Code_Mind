#include<bits/stdc++.h>
using namespace std;
string perfect(int n)
{
    int sum=0;
    for (int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        sum+=i;
    }
    if(sum==n) return "True";
    else return "False";
}
int main()
{
    int num;
    cin>>num;
    cout<<perfect(num);
    return 0;
}