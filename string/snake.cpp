#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s1,s2;
		cin>>s1>>s2;
		s1 = ".." + s1 + "..";
		s2 = ".." + s2 + "..";
		int i;
		for(i=0;i<s1.length();i++)
		{
			if(s1[i]=='#')
			{
				if(s2[i]=='#' || s2[i-1]=='#' || s2[i+1]=='#')
					break;
			}
			if(s2[i]=='#')
			{
				if(s1[i]=='#' || s1[i-1]=='#' || s1[i+1]=='#')
					break;
			}
		}
		if(i>=s1.length())
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}
