#include <bits/stdc++.h>
using namespace std;

class Coder
{
	public:
		int x,y,index;
	
};

bool compare(Coder A, coder B){
	if(A.x == B.x)
	{
		return A.y < B.y;
	}
	return A.x < B.x;
}


int main()
{
	int n;
	cin>>n;
	coder* arr = new coder[n];
	return 0;
}