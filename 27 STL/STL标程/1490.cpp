#include<bits/stdc++.h>
using namespace std;
#define N 1000009
vector<int>vct[N];  //����N����̬���� 

int main()
{
	int n,m,x;
	scanf("%d%d",&n,&m);
	while(n--)
	{
		scanf("%d",&x);
		vct[x%m].push_back(x);  //����ɢ�к�������洢��ַ����x�����Ӧ�Ķ�̬���� 
	}
	for(int i=0;i<m;i++)
		if(vct[i].size()>0)
		{
			printf("%d:",i);
			for(int j=0;j<vct[i].size();j++)
			{
				if(j!=0) printf(" ");
				printf("%d",vct[i][j]); //��� 
			}
			puts("");
		}
	return 0;
}

