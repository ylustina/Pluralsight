// Memory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Person Kate("Kate", "Gregory", 345);
	Kate.AddResource();
	Kate.SetFirstName("Kate2");
	Kate.AddResource();
	Person Kate2 = Kate;
	Kate = Kate2;
	string s1 = Kate.GetResourceName();
	return 0;
}

