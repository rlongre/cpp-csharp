using PersonLibWrapper;
using System;

namespace ManagedWrapper
{
	class Program
	{
		static void Main(string[] args)
		{
			Person p1 = new Person("Managed John", 30);
			p1.SayHello();
			p1.SayAge();
			p1.AddNumbers(100, 200);
			Console.WriteLine("Press Enter to exit");
			Console.ReadLine();
		}
	}
}
