#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v(5);
	for(int i=0; i<5; i++)
	{
		v.push_back(i+1);
	}
	vector<int>:: iterator it;

	for(it=begin(); it!=v.end(); i++)
	{
		cout<<*it<<endl;
	}
	return 0;
}