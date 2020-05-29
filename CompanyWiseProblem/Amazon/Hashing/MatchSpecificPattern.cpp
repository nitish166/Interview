#include <bits/stdc++.h>
#include <string>
using namespace std;

vector<string> findMatchedWords(vector<string> dict, string pattern);


string encode(string pattern)
{
	map<char, int> m;
	int i=0;
	string res="";

	for(char ch: pattern)
	{
		if(m.find(ch)==m.end())
		{
			m[ch]=i++;
		}

		res +=to_string(m[ch]);
	}
	return res;
}



vector<string> findMatchedWords(vector<string> dict, string pattern)
{
	vector<string> ans;
	int len = pattern.length();

	string hash = encode(pattern);

	for(string word: dict)
	{
		if(len==word.length() && hash==encode(word))
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