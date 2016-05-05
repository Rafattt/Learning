#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

void wait()
{
	cout << "Please wait";
	Sleep(1000);
	cout << ".";
	Sleep(1000);
	cout << ".";
	Sleep(1000);
	cout << ".";
}

void generator()
{
	srand(time(NULL));
	cout << "Press any key to generate password. " << endl;
	getchar();
	int gen[8];
	system("cls");
	wait();

	cout << endl << "Your password is: ";
	for (int i = 0; i <= 7; i++)
	{
			gen[i] = (rand() % 50) + 73;
		
		char pass = gen[i];
		cout << pass;
	}
	cout << endl;

}

int menu()
{
	cout << "Generate new password?" << endl;
	cout << "[1] - Yes" << endl;
	cout << "[2] - No" << endl;
	int menu;
	cin >> menu;
	switch (menu)
	{
	case 1:
		return menu;
		break;
	case 2:
		return menu;
		exit(1);
	}
}



int main()
{
	int m = 1;
	do
	{
		generator();
		int m = menu();
		switch (m)
		{
		case 1:

			break;
		case 2:

			exit(1);
		}
	} while (m == 1);
	return 0;
}
