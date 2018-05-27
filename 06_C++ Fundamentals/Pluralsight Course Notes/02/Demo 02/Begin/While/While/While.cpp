// While.cpp : Defines the entry point for the console application.
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
	int i=2;

	while(i <= x/i)
	{
		int factor = x/i;
		if (factor*i == x)
		{
			cout << "factor found: " << factor << endl;
            prime = false;
        }
		i = i + 1;
    }

	cout << x << " is " ;
	if (prime)
		cout << "prime" << endl;
	else
		cout << "not prime" << endl;




	return 0;
}

