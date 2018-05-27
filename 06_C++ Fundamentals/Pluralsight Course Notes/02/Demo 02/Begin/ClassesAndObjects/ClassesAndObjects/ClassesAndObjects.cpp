// ClassesAndObjects.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include "Tweeter.h"
#include "status.h"
#include <iostream>

using std::cout;
using std::endl;

int _tmain(int argc, _TCHAR* argv[])
{
	Person p1("Kate", "Gregory", 123);
	{
	  	Tweeter t1("Someone", "Else", 456, "@whoever");
	}
	cout << "after innermost block" << endl;
	cout << "p1: " << p1.GetName() << " " << p1.GetNumber() << endl;
	p1.SetNumber(124);
	cout << "p1: " << p1.GetName() << " " << p1.GetNumber() << endl;

	return 0;
}

