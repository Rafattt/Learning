#include <iostream>
using namespace std;

void title()
{
	cout << "BMI Calculator 1.0" << endl << endl;
	cout << "Body Mass Index (BMI) is a metric to determine whether  you are underweight,\nnormal weight, overweight or obese, but it’s not an accurate measure of fat." << endl << endl;
	cout << endl << "Press Enter to continue..." << endl <<endl;
	cin.get();
}

void calc()
{
	float weight;
	float height;
	int a = 1;
	cin.clear();
	cin.sync();
	do
	{
		system("cls");
		cout << "Enter your weight in kg: ";
		cin >> weight;
		cout << "Enter your height in cm: ";
		cin >> height;
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
		switch(b)
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


int main()
{
	title();
	
	calc();

	return 0;
}