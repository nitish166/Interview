#include <bits/stdc++.h>
using namespace std;


bool isNumericChar(char x)
{
    return (x >= '0' && x <= '9')? true: false;
}

int atoi(string str)
{
	int n=str.size();
    if (str == "")
       return 0;
  
    int res = 0;  
    int sign = 1;  
    int i = 0; 
  
 
    if (str[0] == '-')
    {
        sign = -1;
        i++;  
    }
  
   
    for (; i<n; ++i)
    {
        if (isNumericChar(str[i]) == false)
            return -1; 
        res = res*10 + str[i] - '0';
    }
  
    // Return result with sign
    
    return sign*res;
}



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<atoi(s)<<endl;
	}
}