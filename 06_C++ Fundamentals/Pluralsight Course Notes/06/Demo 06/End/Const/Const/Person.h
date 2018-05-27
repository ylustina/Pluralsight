#include <string>
#ifndef _Person_H
#define _Person_H
class Person
{
private:
	std::string firstname;
	std::string lastname;
	int arbitrarynumber;

public:
	Person(std::string first,
		std::string last,
		int arbitrary);
	~Person();
	std::string GetName()const ;
	int GetNumber() const {return arbitrarynumber;}
	void SetNumber(int number) {arbitrarynumber = number;}
	bool operator<(const Person& p) const;
	bool operator<(int i) const;
	friend bool operator<(int i, const Person& p);
};
bool operator<(int i, const Person& p);
#endif