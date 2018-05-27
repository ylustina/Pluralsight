// If.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int x,y;
	cout << "Enter two numbers" << endl;
	cin >> x >> y;

	cout << x << " " ;
	if (x > y)
	{
		cout << "is larger than ";
	}
	else
	{
		cout << "is not larger than ";
	}
	cout << y << endl;

	if (x+y > 10)
		cout << "thanks for choosing larger numbers!" << endl;

	return 0;
}

