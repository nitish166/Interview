// Program to identfy given string is Isogram or not.
// An Isogram is a string in which no letter occurs more than once.
// In string when mapping from char and int use [s.at(i)] here s is string.
// Time complexity : O(1)
// uses unordered map which is internally implemented on Hash Table
#include<bits/stdc++.h>
using namespace std;
bool isIsogram(string s)
{
    unordered_map<char, int> order;
    for(int i=0; i<s.length(); i++)
    {
        order[s.at(i)]++;
    }
    for(auto i= order.begin(); i!=order.end(); i++)
    {
        if(i->second>1)
        {
            return 0;
        }
    }
    return 1;
}

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<isIsogram(s)<<endl;
    }
	return 0;
}
