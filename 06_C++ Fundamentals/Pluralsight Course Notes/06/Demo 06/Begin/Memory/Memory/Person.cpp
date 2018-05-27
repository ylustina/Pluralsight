#include "stdafx.h"

#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(string first,string last,
	int arbitrary) : firstname(first),lastname(last),
	arbitrarynumber(arbitrary), pResource(nullptr)
{
}

Person::~Person()
{
}

string Person::GetName() const
{
	return firstname + " " + lastname;
}

bool Person::operator<(Person& p)
{
	return arbitrarynumber < p.arbitrarynumber;
}

bool Person::operator<(int i)
{
	return arbitrarynumber < i;
}

bool operator<(int i, Person& p)
{
	return i < p.arbitrarynumber;
}

void Person::AddResource()
{
	pResource=new Resource("Resource for " + GetName());
}
