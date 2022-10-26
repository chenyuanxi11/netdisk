#include<iostream>
#include<algorithm> 
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<list>
using namespace std;
list < int > L, LTmp;
list < int > ::iterator pos;
list < int > ::reverse_iterator rpos;

int main()
{
    LTmp.push_back(3);
    LTmp.push_back(10);
    for (int i = 1; i <= 6; ++i) L.push_back(i);
    for (pos = L.begin(); pos != L.end();)
        if (*pos == 5)
            pos = L.erase(pos);
        else ++pos;
    L.insert(L.begin(), 3, 0);
    for (pos = L.begin(); pos != L.end(); ++pos)
        cout << *pos << endl;
    L.unique(); //ɾ�������ظ�Ԫ��
    L.sort(greater <int> ());
    cout << endl;
    for (pos = L.begin(); pos != L.end(); ++pos)
        cout << *pos << endl;
    L.swap(LTmp);
    cout << "Size after by swap" << L.size() << endl;
    L.sort(greater<int>());
    LTmp.sort(greater<int>());
    L.merge(LTmp, greater<int>());
    cout << "Size after by merge" << endl;
    for (pos = L.begin(); pos != L.end(); pos++)
        cout << *pos << endl;
    L.reverse(); //��ת����
    L.remove(3); //ɾ��������ƥ���Ԫ��
    for (pos = L.begin(); pos != L.end(); pos++)//����ָ��
        cout << *pos << endl;
    cout << endl;
    for (rpos = L.rbegin(); rpos != L.rend(); rpos++)
        cout << *rpos << endl;
    cout<<endl;
}