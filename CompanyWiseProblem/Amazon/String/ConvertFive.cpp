// function

int convertFive(int n)
{
	string s = to_string(n);
	int x = s.length();
	for(int i=0; i<x;i++)
	{
		if(s[i]=='0')
			s[i]='5';
	}
	int ans = atoi(s.c_str());
	return ans;
}