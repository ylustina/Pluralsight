// VariablesAndTypes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int i1 = 1;
	std::cout << "i1= " << i1 << std::endl;
	int i2;
	i2 = 2;
	std::cout << "i2= " << i2 << std::endl;
	int i3(3);
	std::cout << "i3= " << i3 << std::endl;

	double d1 = 2.2; 
	double d2 = i1;
	int i4 = d1;
	std::cout << "d1= " << d1 << std::endl;
	std::cout << "d2= " << d2 << std::endl;
	std::cout << "i4= " << i4 << std::endl;

	char c1 = 'a';
	//char c2 = "b";
	std::cout << "c1= " << c1 << std::endl;
	//std::cout << "c2= " << c2 << std::endl;
	
	bool flag = false;
	std::cout << "flag= " << flag << std::endl;
	flag =  i1;
	std::cout << "flag= " << flag << std::endl;
	flag =  d1;
	std::cout << "flag= " << flag << std::endl;

/*	unsigned char n1 = 128;
	char n2 = 128;
	std::cout << "n1= " << n1 << std::endl;
	std::cout << "n2= " << n2 << std::endl;
	n1 = 254;
	n2 = 254;
	std::cout << "n1= " << n1 << std::endl;
	std::cout << "n2= " << n2 << std::endl;
	n1 = 300;
	n2 = 300;
	std::cout << "n1= " << n1 << std::endl;
	std::cout << "n2= " << n2 << std::endl;
*/
	return 0;
}

