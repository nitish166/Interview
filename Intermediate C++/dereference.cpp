#include <bits/stdc++.h>
using namespace std;
int main()
{
	int num =3; // declare a simple integer variable and assign it a value

	int *pNum = &num; // declare a pointer to an int and assign the address of num

	cout<<pNum<<endl; // output the address of the pointer  pNum (address of num)

	// in this output statement, we use the deference operator
	// it is the same operatoe used to indicate a pointer variable
	// as well as the multiplication symbol
	// which demostrates operator overloadint in c++
	// the output of this statement will be the value that is stored in num
	// we get the value through indirection because the dereference oprator
	// "de-references" the memory address to get at the underlying value stored there

	cout<<*pNum<<endl;

	// here will show how using the dereference operator allow us
	// to change the underlying values stored in num

	*pNum =45;
	cout<<*pNum<<endl;
	cout<<num<<endl;

	return 0;
}