class Solution {
public:
    bool backspaceCompare(string S, string T) {
        
        
    string result1="", result2="";
	int i=0;
	while(S[i]!='\0')
	{
		if(S[i]>='a' && S[i]<='z')
		{
			result1 +=S[i];
		}
		else if(!result1.empty())
		{
			result1.pop_back();
		}
		++i;
	}

    i=0;

	while(T[i]!='\0')
	{
		if(T[i]>='a' && T[i]<='z')
		{
			result2 +=T[i];
		}
		else if(!result2.empty())
		{
			result2.pop_back();
		}
		++i;
	}
	if(result1.compare(result2)==0)
	{
		return true;
	}
	return false;
        
    }
};



// Another Approch

class Solution {
public:


	string checkString(string &str)
	{
		int i = str.size()-1;
		string result="";
		int count=0;

		while(i>=0)
		{
			if(str[i]=='#')
			{
				count++;
			}
			else
			{
				if(count)
				{
					count--;
				}
				else
				{
					result +=str[i];
				}
			}
			--i;
		}
		return result;
	}


    bool backspaceCompare(string S, string T) {
        
      return checkString(S)==checkString(T);
        
    }
};