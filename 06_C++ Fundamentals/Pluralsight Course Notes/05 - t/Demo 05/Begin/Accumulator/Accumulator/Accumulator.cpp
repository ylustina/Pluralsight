// Accumulator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include "Person.h"
#include "Accum.h"

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	Accum<int> integers(0);
	integers += 3;
	integers += 7;
	cout << integers.GetTotal() << endl;

	Accum<string> strings("");
	strings += "hello";
	strings += " world";
	cout << strings.GetTotal() << endl;

	//integers += "testing";
	//strings += 4;

	return 0;
}

