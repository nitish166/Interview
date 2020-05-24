#include <bits/stdc++.h>
using namespace std;
int main()
{
	int num=3; // an integer variable initialized to the value 3

	// create a pointer variable to an int type
	int *pNum;

	// Assign the address of num to pNum
	// so that it points to the num variable in memory
	pNum = &num;

	// output the value of num
	cout<<num<<endl;

	// output the address of num to compare
	// with the value in pNum
	cout<<&num<<endl;

	// output the value stored in pNum
	cout<<pNum<<endl;
	return 0;

}