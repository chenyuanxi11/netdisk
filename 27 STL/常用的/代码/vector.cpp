#include<iostream>
#include<algorithm> 
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<vector>
using namespace std;
vector < int > P; //定义动态数组P
vector < int >::iterator it;  // 定义迭代器 
int main()
{
    P.clear();
    for (int i = 1; i <= 6; i++) P.push_back(i);
    for (int i = 0; i < P.size(); i++) cout << P[i]  << " "; //用数组下标访问 
    cout << endl;
    P.erase(P.begin() + 1);
    P.insert(P.begin() + 2, 100);
    for (it = P.begin(); it != P.end(); it++) //用迭代器访问 
        cout << *it << " ";
    cout << endl;
    sort(P.begin(), P.end()); //排序 
    for (int i = 0; i < P.size(); i++) cout << P.at(i)  << " "; 
    cout << endl;
}
