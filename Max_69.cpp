#include <iostream>
using namespace std;
int max(int num) 
{
    int arr[4];
    fill(arr,arr+4,0);
    int i=3;
    while(num!=0){
        arr[i--]=num%10;
        num/=10;
    }
    for(i=0;i<=3;i++){
        if(arr[i]==6){arr[i]=9;break;}
    }
    int ans=0,mul=1;
    for(i=3;i>=0;i--){
        ans+=(mul*arr[i]);
        mul*=10;
    }
    return ans;
}
int main()
{
    int num;
    cin>>num;
    cout << max(num);
}