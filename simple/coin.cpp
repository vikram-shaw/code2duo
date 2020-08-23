#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("input2.txt","r",stdin);
	//freopen("output2.txt","w",stdout);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int five = 0,two = 0, one = 0;
		five = n / 5;
		n = n % 5;
		two = n / 2;
		n = n % 2;
		one = n;
		cout<<one<<' '<<two<<' '<<five<<'\n';
	}
}
