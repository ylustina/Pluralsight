// PointersAndInheritance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include "Tweeter.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Person* Kate = new Person("Kate", "Gregory",456);
	Tweeter* KateGregcons = new Tweeter("Kate","Gregory",567,"@gregcons");

	Person* pKateGregcons = KateGregcons;

	cout << Kate->GetName() << endl;
	cout << KateGregcons->GetName() << endl;
	cout << pKateGregcons->GetName() << endl;

	delete KateGregcons;

}

