// CodeChallenge_12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

template <typename T>
T factorial(T n)
{
	T rc=n;
	 while(n>1)
	  {
	 	rc*=--n;
	  }
	 return rc;
}

int main()
{
	int n = 5;
	printf("The factorial of %d is %d\n", n, factorial<int>(n)); //int

	long long unsigned int llui = 15;
	printf("The factorial of %lld is %lld\n", llui, factorial<long long int>(llui)); //long long int

	long double ld = 25;
	printf("The factorial of %.3Lf is %-4.10Lg\n", ld, factorial<long double>(ld));
}
