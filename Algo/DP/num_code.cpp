#include <bits/stdc++.h>
using namespace std;

int num_code(int* n, int size)
{
	if(size==1)
	{
		return 1;
	}
	if(size==0)
	{
		return 1;
	}
	int output = num_code(n, size-1);
	if(output[size-2]*10 + output[size-1] <=26)
	{
		output +=num_code(n, size-2);
	}
	return output;

}


int num_code2(int* n, int size, int* arr)
{
	if(size==1)
	{
		return 1;
	}

	if(size==0)
	{
		return 1;
	}

	if(arr[size]>0)
	{
		return arr[size];
	}

	int output = num_code2(n, size, arr);
	if(output[size-2]*10 + output[size-1] <=26)
	{
		output +=num_code2(n, size, arr);
	}
	arr[size] = output;
	return output;
}

int num_codes_i(int* input, int size)
{
	int* output = new int[size+1];
	output[0] =1;
	output[1] =1;

	for(int i =2; i<=size; i++)
	{
		output[i] = output[i-1];
		if(input[i-2]*10 + input[i-1] <= 26)
		{
			output[i] += output[i-2];
		}
	}
	int ans = output[size];
	delete [] output;
	return ans;
}

int main()
{

}