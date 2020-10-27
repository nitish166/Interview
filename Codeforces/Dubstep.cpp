#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	int pos = str.find("WUB");
	str.erase(pos, 3);
	cout<<str<<endl;
	return 0;
}