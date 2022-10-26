#include<bits/stdc++.h>
using namespace std;
#define N 200009
vector<int>vct[10];  //创建10个动态数组 
int a[N];

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int x=1,flag=1;
	while(flag)
	{
		flag=0;
		for(int i=0;i<n;i++)
		{
			int pos=a[i]/x%10;  //取当前的位数，并将a[i]存入对应的桶中 
			if(pos!=0) flag=1; //如果有一位不为0，证明还要再排几轮 
			vct[pos].push_back(a[i]);	
		}
		int len=0;	
		for(int i=0;i<10;i++)
		{
			for(int j=0;j<vct[i].size();j++)
				a[len++]=vct[i][j];   //将分在各个桶种的数按顺序放回a数组中 
			vct[i].clear();  //每个桶里的数取完了，清空 
		}
		x*=10;
	}	
	for(int i=0;i<n;i++)
	{
		if(i!=0) printf(" ");
		printf("%d",a[i]);  
	}
	puts("");
}


