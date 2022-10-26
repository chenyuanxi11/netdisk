#include<bits/stdc++.h>
using namespace std;

/******************数组用法*****************/ 

priority_queue <int,vector<int>,greater<int> > q0;  //升序队列，小顶堆

priority_queue <int,vector<int>,less<int> >q1;   //降序队列，大顶堆

/*******************************************/



/******************结构体用法*****************/ 
struct PP
{
	int x,y;
	friend operator < (const PP &a,const PP &b)
	{
		if (a.x != b.x) return a.x > b.x; 
    	return a.y > b.y;
	}
};

priority_queue<PP>f;
/*******************************************/

int main() 
{
	PP u;
	for(int i=1;i<=5;i++)
	{
		scanf("%d%d",&u.x,&u.y);
		f.push(u);
	}
	while(!f.empty())
	{
		u=f.top();
		f.pop();
		printf("%d %d***\n",u.x,u.y);
	} 
}

