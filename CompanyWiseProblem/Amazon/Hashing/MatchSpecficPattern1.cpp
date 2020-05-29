#include <bits/stdc++.h>
#include <string>
using namespace std;


// Time Complexity: O(N*K)
// Space Complexity: O(N)


vector<string> findMatchedWords(vector<string> dict, string pattern);


bool check(string word, string pattern)
{
	char ch[128] ={0};
	if(word.length() !=pattern.length())
	{
		return false;
	}

	int len = word.length();

	for(int i=0; i<len; i++)
	{
		if(ch[pattern[i]]==0)
		{
			ch[pattern[i]] = word[i];
		}
		else if(ch[pattern[i]] !=word[i])
		{
			return false;
		}
	}
	return true;
}


vector<string> findMatchedWords(vector<string> dict, string pattern)
{
	vector<string> ans;

	// for each word in the dictionary
	for(string word : dict)
	{
		if(check(word, pattern))
		{
			ans.push_back(word);
		}
	}
	return ans;
}



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> s(n);
		for(int i=0; i<n; i++)
		{
			cin>>s[i];
		}

		string pattern;
		cin>>pattern;

		vector<string> res = findMatchedWords(s, pattern);
		sort(res.begin(), res.end());
		for(int i=0; i<res.size(); i++)
		{
			cout<<res[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}