#include<bits/stdc++.h>
using namespace std;
int v[4000001];
int main()
{
	freopen("input6.txt","w",stdout);
	int n = 1000000;
	int t = 1;
	cout<<4*n+1<<'\n';
	while(t<4)
	{
		for(int i=0;i<n;i+=2){
			v[t*i] = i;
			v[t*i+1] = i;
		}
		t++;
	}
	v[4*n]=4839;
	random_shuffle(v,v+4000001);
	//sort(v,v+50000001);
	for(int n: v)
		cout<<n<<' ';
	cout<<'\n';
}
