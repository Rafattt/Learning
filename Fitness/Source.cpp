#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

int menu()
{
	cout << "What do you want to do?" << endl;
	cout << "[1] - Calculate your BMI. " << endl;
	cout << "[2] - Calculate your body fat gain/lose. " << endl;
	cout << "[3] - Exit program. " << endl;
	int m;
	cin >> m;
	return m;

}

void calc()
{
	float weight;
	float height;
	int a = 1;
	cin.clear();
	cin.ignore(1000, '\n');
	do
	{
		system("cls");
		do
		{
			if (cin.fail())
			{
				cout << endl << "This is not a correct number! \nTry again. \n" << endl;;
				cin.clear();
				cin.ignore(1000, '\n');
			}
			cout << "Enter your weight in kg: ";
			cin >> weight;
			
		} while (cin.fail());
		do
		{
			if (cin.fail())
			{
				cout << endl << "This is not a correct number! \nTry again. \n" << endl;;
				cin.clear();
				cin.ignore(1000, '\n');
			}

		cout << "Enter your height in cm: ";
		cin >> height;
		
	} while (cin.fail());
		float m = height / 100;
		float bmi = weight / (m*m);
		cout << endl << "Your BMI is: " << bmi << endl << endl;
		if (bmi < 18.5)
			cout << endl << "Your BMI status is: " << "Underweight" << endl << endl;
		else if ((bmi >= 18.5) && (bmi < 25))
			cout << endl << "Your BMI status is: " << "Normal or Healthy Weight" << endl << endl;
		else if ((bmi >= 25) && (bmi < 30))
			cout << endl << "Your BMI status is: " << "Overweight" << endl << endl;
		else
			cout << endl << "Your BMI status is: " << "Obese" << endl << endl;


		cout << endl << endl << "Dou you want to calculate BMI again? " << endl;
		cout << "[1] - Yes " << endl;
		cout << "[2] - No " << endl;
		int b;
		cin >> b;
		switch (b)
		{
		case 1:
		{
			int a = 1;
		}
		break;
		case 2:
		{
			a++;
		}
		break;
		}
	} while (a == 1);


}

float calculatepr()
{
	system("cls");
	float weight;
	float bf;
	do
	{
		if (cin.fail())
		{
			cout << endl << "This is not a correct number! \nTry again. \n" << endl;;
			cin.clear();
			cin.ignore(1000, '\n');
		}
		cout << "Enter your previous weight in kg: ";

		cin >> weight;




	} while (cin.fail());
	do
	{
		if (cin.fail())
		{
			cout << endl << "This is not a correct number! \nTry again. \n" << endl;;
			cin.clear();
			cin.ignore(1000, '\n');
		}
		cout << "Enter your previous body fat in %: ";
		cin >> bf;
	} while (cin.fail());

	float bfw = (weight / 100)*bf;
	cout << endl;
	cout << "Your previous fat weight is: " << bfw << " kg." << endl;
	return bfw;

}

void bflose(float prbf)
{
	float weight;
	float bf;
	cout << endl;
	do
	{
		if (cin.fail())
		{
			cout << endl << "This is not a correct number! \nTry again. \n" << endl;;
			cin.clear();
			cin.ignore(1000, '\n');
		}
		cout << "Enter your current weight in kg: ";
		cin >> weight;
	} while (cin.fail());

	do
	{
		if (cin.fail())
		{
			cout << endl << "This is not a correct number! \nTry again. \n" << endl;;
			cin.clear();
			cin.ignore(1000, '\n');
		}
		cout << "Enter your current body fat in %: ";
		cin >> bf;
	} while (cin.fail());
	float bfw = (weight / 100)*bf;
	cout << endl;
	cout << "Your current fat weight is: " << bfw << " kg." << endl;
	float bfl = prbf - bfw;
	cout << endl;
	if (bfl > 0)
		cout << "You lose " << bfl << " kg of body fat!" << endl;
	else if (bfl < 0)
		cout << "You gain " << abs(bfl) << " kg of body fat!" << endl;
}

int main()
{
	int m = 0;
	
	do
	{
		int m = menu();
		switch (m)
		{
		case 1:
		{
			calc();
			break;
		}
		case 2:
		{
			int a = 1;
			do
			{
			float prbf = calculatepr();
			system("PAUSE");
			bflose(prbf);
			cout << endl << endl << "Dou you want to calculate BMI again? " << endl;
			cout << "[1] - Yes " << endl;
			cout << "[2] - No " << endl;
			int b;
			cin >> b;
			switch (b)
			{
			case 1:
			{
				int a = 1;
			}
			break;
			case 2:
			{
				a++;
			}
			break;
			}
		} while (a == 1);


		}
			break;
		case 3:
			exit(1);
		}
	} while (m != 3);
		system("PAUSE");
			system("cls");


	
	return 0;
}