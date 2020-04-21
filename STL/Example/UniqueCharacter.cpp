// Program to extract unique Character in string

#include <bits/stdc++.h>
using namespace std;


char* uniqueChar(char str[])
{
	set<char> s;
	char arr[10000];
	int k=0;
	for(int i=0;i<strlen(str); i++)
	{
		if(s.find(str[i]) ==s.end())
		{
			s.insert(str[i]);
			// storing character in arr with help of k variable
			arr[k]=str[i];
			k++;
		}
	}

	// print arr character
	for(int i=0; i<k; i++)
	{
		cout<<arr[i];
	}
}



int main()
{
	char input[1000000];
	cin>>input;
	cout<<uniqueChar(input)<<endl;
}