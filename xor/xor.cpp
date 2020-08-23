#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("input/input6.txt","r",stdin);
	freopen("output/output6.txt","w",stdout);
	time_t c,f;
	c = clock();
	int n, res = 0, r;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>r,res^=r;
	cout<<res<<'\n';
	f = clock();
	cout<<"\n"<<double(f-c)/double(CLOCKS_PER_SEC)<<'\n';
}
