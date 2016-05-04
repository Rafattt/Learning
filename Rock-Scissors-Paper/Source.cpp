#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void title()
{
	cout << "Welcome to Rock, Scissors, Paper!";
}

int menu()
{
	int choose;
	cout << "What do you want to do? " << endl << endl;
	cout << "[1] - Play the game. " << endl;
	cout << "[2] - Leave program. " << endl;

	      cin >> choose;
      


		  return choose;

}

int game(int m)
{
	int a;
	int b;
	do
	{


		switch (m)
		{

		case 1:
		{

			cout << "What do you choose? " << endl << endl;
			cout << "[1] - Rock. " << endl;
			cout << "[2] - Scissors. " << endl;
			cout << "[3] - Paper. " << endl;

			cin >> a;
			int b = rand() % 3 + 1;
			if (a == 1 && b == 1)
			{
				cout << "You have a rock, and computer have a rock. It's a Draw!" << endl;
			}
			else;
			if (a == 1 && b == 2)
			{
				cout << "You have a rock, computer have a Scissors. You Win! " << endl;
			}
			else;
			if (a == 1 && b == 3)
			{
				cout << "You have a rock, computer have a Paper. You Loose! " << endl;
			}
			else;
			if (a == 2 && b == 1)
			{
				cout << "You have a Scissors, computer have a Rock. You Loose! " << endl;
			}
			else;
			if (a == 2 && b == 2)
			{
				cout << "You have a Scissors and computer have a Scissors. It's Draw! " << endl;
			}
			else;
			if (a == 2 && b == 3)
			{
				cout << "You have a Scissors, computer have a Paper. You Win! " << endl;
			}
			else;
			if (a == 3 && b == 1)
			{
				cout << "You have a Paper, computer have a Rock. You Win! " << endl;
			}
			else;
			if (a == 3 && b == 2)
			{
				cout << "You have a Paper, computer have a Scissors. You Loose! " << endl;
			}
			else;
			if (a == 3 && b == 3)
			{
				cout << "You have a Paper and computer have a paper. It's Draw " << endl;
			}


		}

		break;

		case 2:
		{

			return 0;
		}
		break;

		}
	} while (m == 1);

	return 0;
}


	
	


int main()
{
	srand((unsigned int)time(NULL));
	title();
	int m = menu();
	game(m);

	


}