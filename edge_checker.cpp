#include<bits/stdc++.h>
using namespace std;
string checker(int a, int b)
{
     
    if(b-a==9 and 1<=a<b<=10)
    {
        return "Yes";
    }
    if(a==b-1 and 1<=a<b<=10)
    {
        return "Yes";
    }
    else return "No";
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<checker(a,b);
}