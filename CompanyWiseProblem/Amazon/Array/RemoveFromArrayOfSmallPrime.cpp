#include <bits/stdc++.h>
using namespace std;


void removeDuplicate(vector<int> &vect)
{
	int indx=1;
	for(int i=1; i<vect.size(); i++)
	{
		int j;
		for(j=0; j<i; j++)
		{
			if(vect[i] == vect[j])
			{
				break;
			}
		}
		if(j==i)
		{
			vect[indx++] = vect[i];
		}
	}


	// remove element from vect[indx] to vect[end]
	vect.erase(vect.begin()+indx, vect.end());
}



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> vect;
		for(int i=0;i<n;i++)
		{
			int k;
			cin>>k;
			vect.push_back(k);
		}

		removeDuplicate(vect);
		for(int i=0;i<vect.size();i++)
		{
			cout<<vect[i]<<" ";
		}
		cout<<endl;
	}
}