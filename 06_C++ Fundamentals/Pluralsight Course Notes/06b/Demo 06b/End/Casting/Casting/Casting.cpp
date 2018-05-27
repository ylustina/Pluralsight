// Casting.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include "Tweeter.h"
#include <iostream>
using namespace std;
#include "Resource.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Tweeter t("Kate","Gregory",123,"@gregcons");
	Person* p = &t;
	Tweeter* pt = static_cast<Tweeter*>(p);
	cout << pt->GetName() << endl;

	Resource f("local");
	Tweeter* pi = dynamic_cast<Tweeter*>(&f);
	if(pi)
	{
		cout << pi->GetName() << endl;
	}
	else
	{
		cout << "resource can't be cast to tweeter" << endl;
	}


	return 0;
}

