#include <bits/stdc++.h>
using namespace std;
int main()
{
	// declare and initialize an int variable
	int num =3;

	// create a reference type and assign num to it
	int &refNum = num;

	// output the value contained in num and refNum - they are the save value
	cout<<"Num contains :"<<num<<endl;
	cout<<"refNum contains :"<<refNum<<endl;

	// increment refNum by 1
	refNum++;

	// output the new value of num and refnum - they are the same value
	cout<<"num contains :"<<num<<endl;
	cout<<"refNum contains :"<<refNum<<endl;

	// output the memory address of refNum  and num - they point to the same location
	// therforce they are the same value and the same "identity"
	cout<<"refNum is located as :"<<&refNum<<" and num is located at :"<<&num<<endl;
}