#include<bits/stdc++.h> 
using namespace std;
map < string, int > Hash;
map < string, int > ::const_iterator it;

int main()
{
    Hash.clear();
    Hash.insert(make_pair("aaa", 123));
    Hash.insert(make_pair("bbb", 222));
    cout << Hash["aaa"] << endl;
    //Find
    //Case1
    cout << Hash.count("aaa") << endl;
    //Case2
    it = Hash.find("ccc");
    if (it != Hash.end()) cout << "Find Succed" << endl;
    else cout << "Find Failed" << endl;
    //Remove
    Hash.erase("aaa");
    if (Hash.count("aaa"))
        cout << Hash["aaa"] << endl;
    else cout << "No aaa" << endl;
    
    Hash.clear();
	string s;
	for(int i=1;i<=4;i++)
	{
		cin>>s;
		Hash[s]++;
	}
	for(it=Hash.begin();it!=Hash.end();it++)
		printf("%s %d\n",it->first.c_str(),it->second);
    return 0;
}
