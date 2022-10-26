#include<iostream>
#include<set>
using namespace std;
set < int > T,Tmp;
set < int > ::iterator Pos,ptmp;

int main()
{
    T.clear();
    //insert
    for (int i = 1; i <= 10; i++)
        T.insert(10 - i);
    //iterator
    for (Pos = T.begin(); Pos != T.end(); ++Pos)
        cout << *Pos << " "; cout << endl;
    //find
    Tmp.clear();
    ptmp = T.begin();
    ptmp++;
    ptmp++;
    Tmp.insert(T.begin(),ptmp);
    for (Pos = Tmp.begin(); Pos != Tmp.end(); ++Pos)
        cout << *Pos << " "; cout << endl;
    int Num;
    cin >> Num;
    Pos = T.find(Num);
    if (Pos == T.end()) cout << "No Num" << endl;
    else cout << "Find Num" << endl;
    //remove
    cin >> Num;
    T.erase(Num);
    cout << "ReMove Succ" << endl;
    //upper_bound 返回比Num大的最小的元素
    cin >> Num;
    Pos = T.upper_bound(Num);
    if (Pos != T.end())
        cout << *Pos << endl;
    else cout << "upper_bound Fail" << endl;
    return 0;
}
