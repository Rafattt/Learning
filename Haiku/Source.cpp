#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <windows.h>
using namespace std;

void haiku()
{
	
	string first[9] = { "spin straw","gold","somebody","a square","rock and roll",
		"daydream","your","heart-shaped","glasses" };
	string second[9] = { "help me","tell","of the","dances with","for","could be",
		"in serch of","on the","of the" };
	string third[9] = { "a mountain","highways","kitchen","China","pasta","diamond","Moon","she","me" };
	int a = 1;
		while (a == 1)
		{
			cout << "Press any key to generate haiku." << endl;
			getchar();

			for (int i = 1; i <= 3; i++)
			{
				cout << first[(rand() % 8)] << " ";
				Sleep(1000);
				cout << second[(rand() % 8)] << " ";
				Sleep(1000);
				cout << third[(rand() % 8)] << endl << endl;
				Sleep(1000);
			}
			system("pause");
			system("cls");
		}

}


int main()
{
	srand(time(NULL));
	haiku();
	return 0;
}