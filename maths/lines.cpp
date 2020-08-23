#include<bits/stdc++.h>
using namespace std;
#define INF 1e18
const int MOD = (int)1e9+7;
/*

ax + by + c = 0;
y = -(a/b)x -(c/b);

slope m =-(a/b);
constant c' = -(c/b);
two lines will be collinear if m1==m2 and c1'==c2'

*/
class line{
	public:
	int a,b,c;
};

double slope(line& l)
{
	if(l.b==0)
		return INF;
	return -(l.a*1.0)/(1.0*l.b);
}

double constant(line& l)
{
	if(l.b==0)
		return INF;
	return -(l.c*1.0)/(1.0*l.b);
}

int main()
{
	//freopen("input4.txt","r",stdin);
	//freopen("output4.txt","w",stdout);
	long n, count = 0;
	cin>>n;
	line l;
	cin>>l.a>>l.b>>l.c;
	double main_slope = slope(l);
	double main_const = constant(l);
	set<pair<double,double>> s;//creating a set of slope and constant term
	s.insert({main_slope,main_const});
	for(int i=0;i<n;i++)
	{
		cin>>l.a>>l.b>>l.c;
		double other_slope = slope(l);
		double other_const = constant(l);
		if(main_slope == other_slope && s.find({other_slope,other_const})==s.end())//checking if both the slopes are equal and not collinear with other lines
		{
			s.insert({other_slope,other_const});
			count++;
		}
	}
	cout<<(count*(count+1))/2<<'\n';
}
