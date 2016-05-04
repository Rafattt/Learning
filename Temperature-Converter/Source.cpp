#include <iostream>
using namespace std;

void title()
{
	cout << "Temperature Converter 1.0 by Rafat" << endl << endl;
}

int menu()
{
	int a;
	
		cout << "What do you want to do? " << endl << endl;
		cout << "[1] - Convert Celsius to Fahrenheit. " << endl;
		cout << "[2] - Convert Fahrenheit to Celsius. " << endl;
		
		cin >> a;
	

	return a;

}

void convert(int a)
{
	float c = 1;
	float f = 33.800;
	float x;
	float result;
	
	switch (a)
	{
	case 1:
	{
		cout << "Enter temperature in celsius: ";
		cin >> x;
		cout << endl << endl << " " << x << " celius is " << (1.8*x)+32 << " fahrenheit." << endl << endl;
		
		break;

	}
	case 2:
	{
		cout << "Enter temperature in fahrenheit: ";
		cin >> x;
		cout << endl << endl << " " << x << " farenheit is " << (x-32)/1.8 << " celsius." << endl << endl;
		
		break;
	}

	}
	
}

int main()
{
	int b = 1;
	title();
	do {
		int a = menu();
		convert(a);
		cin.clear();
	    cin.sync();
	} while(b!= 3);
	
		return 0;
}