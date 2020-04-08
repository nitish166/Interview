#include <bits/stdc++.h>
using namespace std;

int min_cost(int** input, int si, int sj, int ei, int ej)
{
	// Reached destination
	if(si==ei && sj==ej)
	{
		return input[ei][ej];
	}

	// Try to cross bondries 
	if(si>ei || sj>ej)
	{
		return INT_MAX;
	}
	
	int options1 = min_cost(input, si+1,  sj, ei, ej);
	int options2 = min_cost(input, si+1, sj+1, ei, ej);
	int options3 = min_cost(input, si, sj+1, ei, ej);
	return input[si][sj] + min(options1, min(options2, options3));
}


int main()
{
	int** input = new int*[3];
	input[0] = new int[3];
	input[1] = new int[3];
	input[2] = new int[3];

	input[0][0] =4;
	input[0][1] =3;
	input[0][2] =2;
	input[1][0] =1;
	input[1][1] =8;
	input[1][2] =3;
	input[2][0] =1;
	input[2][1] =1;
	input[2][2] =8;

	cout<<min_cost(input, 0, 0, 2, 2)<<endl;
	delete [] input[0];
	delete [] input[1];
	delete [] input[2];
	delete [] input;
}