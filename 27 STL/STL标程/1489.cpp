#include<bits/stdc++.h>
using namespace std;
#define N 200009
vector<int>vct[10];  //����10����̬���� 
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
			int pos=a[i]/x%10;  //ȡ��ǰ��λ��������a[i]�����Ӧ��Ͱ�� 
			if(pos!=0) flag=1; //�����һλ��Ϊ0��֤����Ҫ���ż��� 
			vct[pos].push_back(a[i]);	
		}
		int len=0;	
		for(int i=0;i<10;i++)
		{
			for(int j=0;j<vct[i].size();j++)
				a[len++]=vct[i][j];   //�����ڸ���Ͱ�ֵ�����˳��Ż�a������ 
			vct[i].clear();  //ÿ��Ͱ�����ȡ���ˣ���� 
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


