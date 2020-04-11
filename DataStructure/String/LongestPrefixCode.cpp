#include <bits/stdc++.h>
using namespace std;


int* kgetLps(string pattern)
{
	int len = pattern.length();
	int* lps = new int[len];

	lsp[0] = 0;
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
				lsp[i] =0;
				i++;
			}
		}
	}
	return lps;
}