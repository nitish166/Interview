#include <bits/stdc++.h>
using namespace std;
int main()
{
	// declare a pointer to int and allocate space for it
	// with the keyword new 
	int *pInt = new int;

	// declare a pointer to double and allocate space for it
	// with the keyword new


	double *pDouble = new double;

	// store the value 3 in the memory location
	// pointed to by pDouble
	*pDouble = 5.0;

	// output the value and the memory address
	cout<<"value stored at pInt  ="<<*pInt<<": memory address =  "<<pInt<<endl;
	cout<< "value stored at pDouble ="<<*pDouble<<": location  =" << pDouble<<endl;

	cout<<"Size of pInt  ="<<sizeof(pInt)<<endl;
	cout<<"Size of *pInt ="<<sizeof(*pInt)<<endl;

	cout<<"size of pDouble ="<<sizeof(pDouble)<<endl;
	cout<<"Size of *pDouble ="<<sizeof(*pDouble)<<endl;

	// lets now clean up the memory we have used
	// and release that memory back to the operating system
	// otherwise out application has a memory leak

	delete pInt;
	delete pDouble;
	return 0;
}