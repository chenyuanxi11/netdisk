#include<bits/stdc++.h>
using namespace std;
#define N 100005
vector<int>v[N];

int hs[N],t[N],k[N];

int main()
{
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%d%d",&t[i],&k[i]);
		for(int j=0;j<k[i];j++)
		{
			scanf("%d",&x);
			v[i].push_back(x);
		}
	}
	int sum=0;
	memset(hs,0,sizeof(hs));
	int l=0;
	for(int r=0;r<n;r++)
	{
		for(int i=0;i<k[r];i++)
		{
			hs[v[r][i]]++;
			if(hs[v[r][i]]==1) sum++;
		}
		
		while(t[r]-t[l]>=86400)
		{
			for(int i=0;i<k[l];i++)
			{
				hs[v[l][i]]--;
				if(hs[v[l][i]]==0) sum--;
			}
			l++;
		}
		printf("%d\n",sum);
	}
	return 0;
}
