#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long int LL;


int subString(string s)
{
	// when string have only one value
	long long totalSum = s[0] - '0';
	long long lastValue = s[0] - '0';

	for(int i=1; i<s.length(); i++)
	{
		lastValue = lastValue*10 + (s[i]-'0')*(i+1);
		lastValue = lastValue%mod;
		totalSum = (totalSum + lastValue)%mod;
	}

	return totalSum;

}
 
int main()
{
 
   ios_base:: sync_with_stdio(false); cin.tie(0);
   string n;
   getline(cin, n);

   int result = subString(n);
   cout<<result<<endl;
   return 0;
}