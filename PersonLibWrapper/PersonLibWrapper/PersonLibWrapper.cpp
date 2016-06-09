// This is the main DLL file.

#include "stdafx.h"

#include "PersonLib.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace PersonLibWrapper
{
	public ref class Person
	{
	private:
		PersonLib::Person* person;
	public:
		Person(String ^name, int age)
		{
			person = new PersonLib::Person((char *)Marshal::StringToHGlobalAnsi(name).ToPointer(), age);
		}

		~Person()
		{
			delete person;
			person = 0;
		}

		void SayHello()
		{
			person->SayHello();
		}

		void SayAge()
		{
			person->SayAge();
		}

		void AddNumbers(int x, int y)
		{
			person->AddNumbers(x, y);
		}
	};
}