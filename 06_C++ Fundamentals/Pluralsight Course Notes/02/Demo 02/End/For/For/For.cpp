// For.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int x;
	cout << "Enter a number" << endl;
	cin >> x ;

	bool prime = true;
	for (int i=2; i <= x/i; i = i + 1)
	{
		int factor = x/i;
		if (factor*i == x)
		{
			cout << "factor found: " << factor << endl;
            prime = false;
			break;
        }
    }

	cout << x << " is " ;
	if (prime)
		cout << "prime" << endl;
	else
		cout << "not prime" << endl;


	return 0;
}

