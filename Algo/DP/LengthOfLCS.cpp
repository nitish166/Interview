#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, m, maxx=0;
		int mat[101][101];
		cin>>n>>m;
		string str1, str2;
		cin>>str1>>str2;
		memset(mat, 0, sizeof(mat));

		for(int i=1; i<=m; i++)
		{
			for(int j=1; j<=n; j++)
			{
				if(str1[i-1]==str2[j-1])
				{
					mat[i][j] = mat[i-1][j-1] +1;
					maxx = max(mat[i][j], maxx);
				}
			}
		}
		cout<<maxx<<endl;
	}
	return 0;
}