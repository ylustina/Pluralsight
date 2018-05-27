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
	return 0;
}

