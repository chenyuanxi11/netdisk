#include<iostream>
#include<algorithm> 
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<vector>
using namespace std;
vector < int > P; //���嶯̬����P
vector < int >::iterator it;  // ��������� 
int main()
{
    P.clear();
    for (int i = 1; i <= 6; i++) P.push_back(i);
    for (int i = 0; i < P.size(); i++) cout << P[i]  << " "; //�������±���� 
    cout << endl;
    P.erase(P.begin() + 1);
    P.insert(P.begin() + 2, 100);
    for (it = P.begin(); it != P.end(); it++) //�õ��������� 
        cout << *it << " ";
    cout << endl;
    sort(P.begin(), P.end()); //���� 
    for (int i = 0; i < P.size(); i++) cout << P.at(i)  << " "; 
    cout << endl;
}
