#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("input4.txt","w",stdout);
	int n;
	cin>>n;
	cout<<n<<'\n';
	srand(time(NULL));
	for(int i=0;i<=n;i++)
	{
		int a = rand()%100;
		int b = rand()%100;
		int c = rand()%100;
		if(a==0 && b==0)
		{
			i--;
			continue;
		}
		cout<<a<<" "<<b<<' '<<c<<'\n';
	}
}
