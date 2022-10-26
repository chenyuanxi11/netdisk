#include<bits/stdc++.h>
using namespace std;
#define N 1000009
set<string>st;
set<string>::iterator it;
int a[30]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
int main()
{
    st.clear();
    int n;
    cin>>n;
    char s[20];
    while(n--)
    {
        scanf("%s",s);
        for(int i=0;i<13;i++)
            if(s[i]>='A' && s[i]<='Z') s[i]=a[s[i]-'A']+'0';
        st.insert(s);   
    } 
    for(it=st.begin();it!=st.end();it++)
            cout<<*it<<endl;
    
