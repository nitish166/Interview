// Libary Function
#include <bits/stdc++.h>

// cin and cout are defined here
using namespace std;

int main()
{
	// declared stack
	stack <int> s;

	int num;
	cout<<"Enter Integer Number :"<<endl;
	cin>>num;

    // Until number become zero
	while(num>0)
	{
		// give reminder 
		s.push(num%2);
		
		// give quotient 
		num = num/2;
	}

	// until stack not become empty
	while(!s.empty())
	{
		// print number from stack
		cout<<s.top();
		s.pop();
	}
	// for new line
	cout<<endl;
	return 0;
}