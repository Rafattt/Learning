#include <iostream>
using namespace std;

/* Write a program that prints the numbers from 1 to 100.
But for multiples of three print “Fizz” instead of the number and for the multiples of five print “Buzz”.
For numbers which are multiples of both three and five print “FizzBuzz. */

int main()
{
	int tab[99];

	int a = 1;


	do
	{
		tab[a] = a;
		if (tab[a] % 3 == 0 && tab[a] % 5 != 0)
		{
			cout << "Fizz" << endl;
		}
		else
			if (tab[a] % 5 == 0 && tab[a] % 3 != 0)
			{
				cout << "Buzz" << endl;
			}
			else
				if (tab[a] % 5 == 0 && tab[a] % 3 == 0)
				{
					cout << "FizzBuzz" << endl;
				}
				else
					cout << tab[a] << endl;
		a++;
	} while (a <= 100);
	cin.get();
	return 0;
}