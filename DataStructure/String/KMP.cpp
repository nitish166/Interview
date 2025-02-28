#include <bits/stdc++.h>
using namespace std;

// Longest Prefix Suffix code
int* getLps(string pattern)
{
	int len = pattern.length();
	int* lps = new int[len];

	lps[0] = 0;
	int i=1;
	int j=0;

	while(i<len)
	{
		if(pattern[i] == pattern[j])
		{
			lps[i] = j+1;
			j++;
			i++;
		}else{
			if(j!=0)
			{
				j = lps[j-1];
			}
			else
			{
				lps[i] =0;
				i++;
			}
		}
	}
	return lps;
}


// KMP search Algorithm

bool kmpSearch(string text, string pattern)
{
	int lenText = text.length();
	int lenPat = pattern.length();

	int i=0;
	int j=0;

	int* lps = getLps(pattern);
	while(i<lenText && j<lenPat)
	{
		if(text[i] == pattern[j])
		{
			i++;
			j++;
		}
		else
		{
			if(j!=0)
			{
				j = lps[j-1];
			}
			else
			{
				i++;
			}
		}
	}
	if(j==lenPat)
	{
		return true;
	}
	return false;
}

int main()
{
	string str ="abcxabcdabcdabcy";
	string subString = "abcdabcy";

	cout<<kmpSearch(str, subString) <<endl;
	return 0;
}