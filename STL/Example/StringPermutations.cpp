// String Permutations ans Palindrome
#include <bits/stdc++.h>
using namespace std;



char getchar(int i)
{
	return (char)(i+97);
}

void printPallidromeString(string s)
{
	map<char, vector<int> > indexMap;

	// store index of each character in the vector form
	for(int i=0; i<s.length(); i++)
	{
		indexMap[s[i]].push_back(i);
	}

	int odd_freq_count =0;

	// count odd_freq_count in vector
	for(int i=0; i<26; i++)
	{
		if((indexMap[getchar(i)].size()%2!=0))
		{
			odd_freq_count++;
		}
	}

    // if freq count is more than 2
	if(odd_freq_count >=2){
		cout<<"-1";
		return;
	}

	// even frequency element 

	int ans[s.length()];
	int start=0;
	int end = s.length()-1;
	for(int i=0; i<26; i++)
	{
		char currentChar = getchar(i);

		for(int j=0; j<indexMap[currentChar].size(); j+=2)
		{
			// for odd character
			if(indexMap[currentChar].size()-j==1)
			{
				ans[s.length()/2] = indexMap[currentChar][j];
				continue;
			}
			ans[start] = indexMap[currentChar][j];
			ans[end] = indexMap[currentChar][j+1];
			start++;
			end--;
		}
	}

	for(int i=0; i<s.length(); i++)
	{
		cout<<ans[i]+1<<" ";
	}
	return;

}


int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		printPallidromeString(s);
		cout<<endl;
	}
	return 0;
}