#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void title()
{
	cout << "Welcome to Hangman Game!" << endl << endl;
	cout << "Press Enter to continue..." << endl;
	cin.get();
}

int draw()
{
	return rand() % 8 + 1;
}

string dictionary(int dr)
{
	string a = "test";
	string b = "program";
	string c = "monitor";
	string d = "paper";
	string e = "easy";
	string f = "mouse";
	string g = "telephone";
	string h = "door";

	switch (dr)
	{
	case 1:
		return a;
		break;
	case 2:
		return b;
		break;
	case 3:
		return c;
		break;
	case 4:
		return d;
		break;
	case 5:
		return e;
		break;
	case 6:
		return f;
		break;
	case 7:
		return g;
		break;
	case 8:
		return h;
		break;

	}

}

void game(string dic)
{
	
	
		char a;
		char fl;
		char f2;
		char f3;
		char f4;

		cout << "This word has " << dic.length() << " letters. " << endl << endl;
		cout << string(dic.length(), 'X') << endl;



		cout << "Type letter" << endl;
		int g = 3;


		int count = 0;



		g--;
		cout << endl;
		cin >> fl;
		cout << endl;
		cout << "You have 4 guess left! " << endl;
		for (int i = 0; i < dic.length(); i++)

		{
			if (dic[i] == fl)
			{
				count++;
				cout << fl;
			}
			if (dic[i] != fl)
				cout << 'X';


		}
		cout << endl;
		cin >> f2;
		cout << endl;
		cout << "You have 3 guess left! " << endl;
		for (int i = 0; i < dic.length(); i++)
		{

			if (dic[i] == f2) count++;

			if (dic[i] != f2 && dic[i] != fl)
				cout << 'X';
			if (dic[i] == fl)
				cout << fl;
			if (dic[i] == f2)
				cout << f2;

		}
		cout << endl;
		cin >> f3;
		cout << endl;
		cout << "You have 2 guess left! " << endl;
		for (int i = 0; i < dic.length(); i++)
		{

			if (dic[i] == f3) count++;

			if (dic[i] != f2 && dic[i] != fl && dic[i] != f3)
				cout << 'X';
			if (dic[i] == fl)
				cout << fl;
			if (dic[i] == f2)
				cout << f2;
			if (dic[i] == f3)
				cout << f3;

		}
		cout << endl;
		cin >> f4;
		cout << endl;
		cout << "You have 1 guess left! " << endl;
		for (int i = 0; i < dic.length(); i++)
		{

			if (dic[i] == f4) count++;

			if (dic[i] != f2 && dic[i] != fl && dic[i] != f3 && dic[i] != f4)
				cout << 'X';
			if (dic[i] == fl)
				cout << fl;
			if (dic[i] == f2)
				cout << f2;
			if (dic[i] == f3)
				cout << f3;
			if (dic[i] == f4)
				cout << f4;

		}
		string solve;
		cout << endl;
		cout << "Guess word now!" << endl;
		cout << "The Word is: ";
		cin >> solve;
		cout << endl;
		if (solve == dic)
			cout << "The word is:" << dic << " - You Win!" << endl;
		else
			cout << "You Loose! The Word was: " << dic << endl;
		
	





}



int main()
{
	int ex;
	do
	{
	title();
	srand((unsigned int)time(NULL));
	int dr = draw();
	string dic = dictionary(dr);
	game(dic);
	cout << endl << endl << "Do You want to play again?" << endl;
	cout << "[1] - Yes." << endl;
	cout << "[2] - No." << endl;

	cin >> ex;
    }while (ex != 2);


	return 0;
}
