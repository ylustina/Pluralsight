// Functions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include "Utility.h"



int _tmain(int argc, _TCHAR* argv[])
{
	int x;
	cout << "Enter a number" << endl;
	cin >> x ;

	if (IsPrime(x))
		cout <<  x << " is prime" << endl;
	else
		cout <<  x << " is not prime" << endl;

	if (Is2MorePrime(x))
		cout << x << "+2 is prime" << endl;
	else
		cout << x << "+2 is not prime" << endl;

	return 0;
}

