#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s,t; // �½��ַ���
	 
	cin>>s>>t; // ����
	 
	if(s>t) printf("YES\n"); //string���Ϳ���ֱ�ӱȽϴ�С 
	else printf("No\n");
	
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='a') cout<<"i"; //�����ַ���	
	} 
	
	s.append("***");  //ĩβ�����ַ���	
	s.push_back('a');  //ĩβ����1���ַ� 
	s.insert(2,"abs"); //��ָ��λ��ǰ����
	s+="***"; //string������������������� 
	s=s+t;  //string������������������� 
	
	s="hello,world";
	s.erase(2,3); //��λ��2��ʼ��ɾ�������������ַ� 
	cout<<s<<endl; 
	
	s="hello,world";
	s.replace(0,5,"welcome"); //��λ��0��ʼ��������5���ַ����滻�ɺ�����ַ��� 
	cout<<s<<endl; 
	return 0; 
} 
