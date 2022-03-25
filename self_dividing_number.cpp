#include <bits/stdc++.h> 
using namespace std; 
  
bool isDivisible(int n, int digit)
{ 
    while(digit)
    {
        if(n%digit==0)
        {
            return true;
        }
        else{
            return false;
        }
    }
} 
  
bool selfDivide(int n){ 
    int temp = n; 
    while(temp > 0){ 
  
        int digit = n % 10; 
        if((isDivisible(n, digit))) 
            return false; 
  
        temp /= 10; 
    } 
    return true; 
} 
  
int main(){ 
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++) 
    {
        if(selfDivide(i)) 
         cout<<i<<" ";
    } 
    return 0; 
}