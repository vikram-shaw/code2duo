#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("input/input6.txt","r",stdin);
	freopen("output/brute/output6.txt","w",stdout);
	int n;
	time_t c,e;
	c = clock();
	cin>>n;
	vector<int> v(n);
	map<int,int> mp;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		mp[v[i]]++;
	}
	int r = 0;
	for(pair<int,int> p: mp)
	{
		if(p.second&1)
		{
			r = p.first;
			break;
		}
	}
	cout<<r<<'\n';
	e = clock();
	cout<<'\n'<<double(e-c)/double(CLOCKS_PER_SEC)<<'\n';
}
