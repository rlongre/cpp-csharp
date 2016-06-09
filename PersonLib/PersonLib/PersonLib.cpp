// PersonLib.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <iostream>
#include "PersonLib.h"

using namespace std;

namespace PersonLib
{
	Person::Person(char* name, int age)
	{
		memset(this, 0, sizeof(Person));
		strcpy_s(this->name, name);
		this->age = age;
	}

	Person::~Person()
	{

	}

	void Person::SayHello()
	{
		cout << "Hi! My name is " << this->name << endl;
	}

	void Person::SayAge()
	{
		cout << "I am " << this->age << " years old" << endl;
	}

	void Person::AddNumbers(int x, int y)
	{
		cout << x << " plus " << y << " equals " << x + y << endl;
	}

	Person* PL_C_CreatePerson(char *name, int age)
	{
		return new Person(name, age);
	}

	Person* PL_CPP_CreatePerson(char *name, int age)
	{
		return new Person(name, age);
	}
}