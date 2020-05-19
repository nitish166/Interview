#include <bits/stdc++.h>
using namespace std;


// This function receives an integer n, and returns
// the number of digits present in n!

int digitsInFactorial(int n)
{
    //Your code here
    // factorial exists only for n>=0
   	if(n<0)
   	{
   		return 0;
   	}

   	// base case
   	if(n<=1)
   	{
   		return 1;
   	}
   	// else iterate through n and calculate the 
   	// value
   	double digit =0;
   	for(int i=2; i<=n; i++)
   	{
   		digit += log10(i);
   	}
   	return floor(digit) +1;

}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ans = digitsInFactorial(n);
		cout<<ans<<endl;
	}
}