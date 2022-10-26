#include<bits/stdc++.h>
using namespace std;
#define N 1000009
map<string,int>mp;
map<string,int>::iterator it;
int a[30]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
int main()
{
    mp.clear();
    int n;
    cin>>n;
    char s[20];
    while(n--)
    {
        scanf("%s",s);
        for(int i=0;i<13;i++)
            if(s[i]>='A' && s[i]<='Z') s[i]=a[s[i]-'A']+'0';
        mp[s]++;    
    } 
    int sum=0;
    for(it=mp.begin();it!=mp.end();it++)
        if(it->second>1){
            cout<<it->first<<" "<<it->second<<endl;
            if(sum==0) sum=1;
        }
    if(!sum) printf("No duplicates.");
    return 0;
}
