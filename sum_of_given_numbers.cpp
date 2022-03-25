#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,arr[n];
    cin>>n;
    vector<int> vec;
    for (int i=1;i<=n;i++)
    {
            cin>>a>>b;
            vec.push_back(a+b);
    }
    for (auto i = vec.cbegin(); i != vec.cend(); ++i)
        cout << *i <<endl;
    return 0;
}