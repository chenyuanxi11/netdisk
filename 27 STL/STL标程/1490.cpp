#include<bits/stdc++.h>
using namespace std;
#define N 1000009
vector<int>vct[N];  //创建N个动态数组 

int main()
{
	int n,m,x;
	scanf("%d%d",&n,&m);
	while(n--)
	{
		scanf("%d",&x);
		vct[x%m].push_back(x);  //利用散列函数求出存储地址，将x存入对应的动态数组 
	}
	for(int i=0;i<m;i++)
		if(vct[i].size()>0)
		{
			printf("%d:",i);
			for(int j=0;j<vct[i].size();j++)
			{
				if(j!=0) printf(" ");
				printf("%d",vct[i][j]); //输出 
			}
			puts("");
		}
	return 0;
}

