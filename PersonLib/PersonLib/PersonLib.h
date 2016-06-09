#pragma once

#ifdef PERSONLIB_EXPORTS
#define PERSONLIB_API __declspec(dllexport)
#else
#define PERSONLIB_API __declspec(dllimport)
#endif // PERSONLIB_EXPORTS

namespace PersonLib
{
	typedef class PERSONLIB_API Person
	{
		int age;
		char name[1024];

	public:
		Person(char* name, int age);
		~Person();

		void SayHello();
		void SayAge();
		void AddNumbers(int x, int y);
	} *PersonPtr;

	// Person factory with C interface
	extern "C" PERSONLIB_API Person* PL_C_CreatePerson(char *name, int age);

	// Person factory with C++ interface
	PERSONLIB_API Person* PL_CPP_CreatePerson(char *name, int age);
}