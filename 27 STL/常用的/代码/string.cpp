#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s,t; // 新建字符串
	 
	cin>>s>>t; // 输入
	 
	if(s>t) printf("YES\n"); //string类型可以直接比较大小 
	else printf("No\n");
	
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='a') cout<<"i"; //遍历字符串	
	} 
	
	s.append("***");  //末尾加上字符串	
	s.push_back('a');  //末尾加上1个字符 
	s.insert(2,"abs"); //在指定位置前插入
	s+="***"; //string类型重载了算术运算符 
	s=s+t;  //string类型重载了算术运算符 
	
	s="hello,world";
	s.erase(2,3); //从位置2开始，删除连续的三个字符 
	cout<<s<<endl; 
	
	s="hello,world";
	s.replace(0,5,"welcome"); //从位置0开始，连续的5个字符，替换成后面的字符串 
	cout<<s<<endl; 
	return 0; 
} 
