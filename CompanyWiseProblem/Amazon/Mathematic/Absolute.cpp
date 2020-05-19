#include <bits/stdc++.h>
using namespace std;

// Time complexity: O(1)
int absolute(int I) {
    // Your code here
    if(I>=0)
    {
        return I;
    }
    else
    {
        return (-1*I);
    }
}


// Using inbuild function
int absolute(int I)
{
	return abs(I);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<< absolute(n)<<endl;
	}
	return 0;
}