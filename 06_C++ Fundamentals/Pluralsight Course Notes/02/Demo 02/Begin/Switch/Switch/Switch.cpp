// Switch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	int x;
	cout << "Enter a number, 0 to quit" << endl;
	cin >> x ;
	while (x>0)
	{

		switch(x)
		{
		case 1:
			cout << "you entered 1" << endl;
			break;
		case 2:
		case 3:
			cout << "you entered 2 or 3" << endl;
			break;
		case 4:
			cout << "you entered 4" << endl;
		case 5:
			cout << "you entered 5" << endl;
			break;
		default:
			cout << "you entered other than 1-5" << endl;
		}
	cout << "Enter a number, 0 to quit" << endl;
	cin >> x ;
	}
	return 0;
}

