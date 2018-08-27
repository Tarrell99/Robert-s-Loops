#include <iostream>
int main()
{
	// problem 1 A
	{
		for (int i = 100; i >= 0; i--)
		{
			std::cout << i << std::endl;
		}

	}
	{
		// space
	}
	// problem 1 B
	{
		for (int i = 99
			; i >= 0; i--)
		{
			std::cout << i << std::endl;
		}
	}
	{
		//space 

	}
	// problem 1 C
	{
		for (int i = 100; i >= 1; i--)
		{
			std::cout << i << std::endl;
		}
	}
	{
		//space
	}
	//problm 1 D
	{
		for (int i = 100; i >= 0; i -=
			2)
		{
			std::cout << i << std::endl;
		}
	}
	//space
	// problem 2 A
	{
		for (int i = 0; i <= 100; i++)
			if (i % 5 == 0 && i % 3 == 0)
			{
				std::cout << "Fizz Buzz";
			}
			else if (i % 3 == 0)

			{
				std::cout << "Fizz";
			}

			else if (i % 5 == 0)
			{
				std::cout << "Buzz";
			}
			else
			{
				std::cout << i << std::endl;
			}

	}
	{
		//space
	}
	//problem 3
	{
		int X;
		int Y = X + X;
		for ( int X = 1000; X >= 0; X--)
			if (X % 5 == 0 && X % 3 == 0)
			{
				std::cout << Y << std::endl;
			}
	}


	system("pause");
}