#include "stdafx.h"
#include <iostream>
using namespace std;

#include "Utility.h"

bool IsPrime(int x)
{
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
	return prime;
}

bool Is2MorePrime(int x)
{
	x = x+2;
	return IsPrime(x);
}

//int& BadFunction()
//{
//	int a = 3;
//	return a;
//}

