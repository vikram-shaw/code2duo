#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("input5.txt","w",stdout);
	int n;
	cin>>n;
	vector<int> v(2*n+1);
	for(int i=0;i<2*n;i++)
		v[i] = i;
	v[2*n] = 89;
	random_shuffle(v.begin(),v.end());
	cout<<2*n+1<<'\n';
	for(int i=0;i<2*n+1;i++)
		cout<<v[i]<<' ';
	cout<<'\n';
}
