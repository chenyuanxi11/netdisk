#include<bits/stdc++.h>
using namespace std;

struct pp{
	int x,y;
	friend bool operator<(const pp &a,const pp &b)
	{
		if(a.x==b.x) return a.y>b.y;
		return a.x>b.x;	
	} 	
};



set<pp>st; 
set<pp>::iterator it;

int main()
{
	int n;
	pp u;
	cin>>n;
	st.clear();
	for(int i=1;i<=n;i++)
	{
		cin>>u.x>>u.y;
		st.insert(u);
	}
	for(it=st.begin();it!=st.end();it++)
	{
		cout<<it->x<<" "<<it->y<<"**"<<endl;
	}
	return 0; 
} 
