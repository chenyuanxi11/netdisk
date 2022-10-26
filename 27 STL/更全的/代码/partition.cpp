#include<bits/stdc++.h>
using namespace std;
bool IsOdd (int i) { return (i%2)==1; }
int main () 
{
	vector <int> a;
	vector <int>::iterator bound, it;
	for (int i=1; i<=10; ++i) a.push_back(i); // 1 2 3 4 5 6 7 8 9 10		
  	bound = partition (a.begin(), a.end(), IsOdd);
	cout << "odd elements:";
  	for (it = a.begin(); it != bound; ++it) cout << " " << *it;
  	cout << endl;
  	sort(a.begin(), a.end());
  	bound = stable_partition (a.begin(), a.end(), IsOdd);
	cout << "[stable] even elements:";
	for (it = bound; it != a.end(); ++it) cout << " " << *it;
  	cout << endl;
	return 0;
}

