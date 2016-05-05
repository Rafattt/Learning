#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;




void Welcome()
{
	cout << "Heads or Tails 1.0 by Rafat " << endl << endl;
}

int menu()
{
	int a;
	int b;

	do
	{

		cout << "What you want to do? " << endl << endl;
		cout << "[1] - Play a game. " << endl;
		cout << "[2] - Exit Program. " << endl;

		cin >> a;
		switch (a)
		{
		case 1:
		{
			system("cls");
			cout << endl << "What do you choose? " << endl << endl;
			cout << "[1] - HEADS " << endl;
			cout << "[2] - TAILS " << endl;
			cin >> b;
		}
		switch (b)
		{
		case 1:
		{
			int r = (rand() % 2) + 1;
			if (r != 2)
			{

				cout << endl << "HEAD - You Win!" << endl << endl;
				system("pause");
				system("cls");
			}
			else
			{
				cout << endl << "TAIL -You Lose!" << endl << endl;
				system("pause");
				system("cls");
				break;
			}
		}
		case 2:
		{
			int r = rand() % 2 + 1;
			if (r != 1)
			{

				cout << endl << "TAIL - You Win!" << endl << endl;
				system("pause");
				system("cls");
			}
			else
			{
				cout << endl << "HEAD - You Lose!" << endl << endl;
				system("pause");
				system("cls");
				break;
			}
		}

		}

		break;

		case 2:
			return 0;

		}
		cin.clear();
		cin.sync();
		
	} while (a != 2);
}

int main()
{
	srand(time(NULL));
	Welcome();
	menu();


}
