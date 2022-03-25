#include <bits/stdc++.h>
using namespace std;
void fib(int num)
{
	if (num == 0) {
		cout << 0;
		cout<<0;
	}
	int n1 = 0, n2 = 1;
	int n3=n1+n2;
	while (n3 <= num) {
		n1=n2;
		n2=n3;
		n3=n1+n2;
	}
	int ans = (abs(n3 - num)
			>= abs(n2 - num))
				? n2
				: n3;
	if(abs(n3 - num)==abs(n2 - num))
	{
	    cout<<n2<<" "<<n3;
	    
	    
	}
	else
	{
	    cout<<ans;
	}
}
int main()
{
	int num;
	cin>>num;
    fib(num);
	return 0;
}
