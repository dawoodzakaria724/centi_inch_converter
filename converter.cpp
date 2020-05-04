#include <iostream>
#include "converter.h"

using namespace std;
double centimetersConverter(double x);
double inchesConverter(double x);
int choice = 0;
int counter = 0;

int main()
{
	double Centimeters, Inches;

	do
	{
		cout << "1. Centimeters to inches converter.\n"
			 << "2. Inches to centimeters converter.\n"
			 << "3. Exit program.\n" << endl;
		cout << "Choose between options 1, 2, or 3: ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case 1:
			cout << "Enter the amount of centimeters"
				 << " to be converted to inches: ";
			cin >> Centimeters;
			cout << "\n" << Centimeters << " centimeters = "
				 << centimetersConverter(Centimeters)
				 << " inches.\n" << endl;
			break;

		case 2:
			cout << "Enter the amount of inches"
				 << " to be converted to centimeters: ";
			cin >> Inches;
			cout << "\n" << Inches << " inches = "
				 << inchesConverter(Inches) << " centimeters.\n" << endl;
			break;

		case 3:
			cout << "Exiting program." << endl;
			break;

		default:
			cout << "invalid choice." << endl;
		}

		counterNum(counter);

	} 
	while (choice != 3);

	cout << "You went through the menu " 
		 << counter << " times" << endl;

	return 0;
}