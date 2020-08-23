#include<bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>>& adj, vector<int>& virus, vector<bool>& visited,int start = 0)
{
	for(int city : adj[start])
	{
		if(visited[city])
			continue;
		virus[city]+=virus[start];
		visited[city] = true;
		bfs(adj,virus,visited,city);
	}
}

int main()
{
	freopen("input4.txt","r",stdin);
	freopen("output4.txt","w",stdout);	
	int city;
	cin>>city;
	vector<vector<int>> adj(city);
	for(int i=1;i<city;i++)
	{
		int x,y;
		cin>>x>>y;
		x--;
		y--;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	vector<int> virus(city);
	vector<bool> visited(city,false);
	for(int i=0;i<city;i++)
		cin>>virus[i];

	visited[0] = true;
	bfs(adj,virus,visited);

	for(int i=0;i<city;i++)
		cout<<virus[i]<<' ';
	cout<<'\n';
	return 0;
}
