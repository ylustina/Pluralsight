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
	Tweeter* pt = (Tweeter*)p;
	cout << pt->GetName() << endl;

	return 0;
}

