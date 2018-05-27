// FreeStore.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Resource.h"
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	{
		Resource localResource ("local");
		string localString = localResource.GetName();
	}
	Resource* pResource = new Resource("created with new");
	string newString = pResource->GetName();
	int j=3;
	if (j==3)
	{
		return 0;
	}
	Resource* p2 = pResource;
	string string2 = p2->GetName();
	delete pResource;
	//string string3 = pResource->GetName();
	//pResource = nullptr;
	//delete pResource;
	//delete p2;

	return 0;
}

