#include <iostream>
#include <iomanip>
# include <math.h>

using namespace std;

double triangleChoice;
double decisionChoice;

double sideA;
double sideB;
double sideC;

double missingSide;

double perim;
double area;

void right()
{
	cout << "Which side is unknown?\n 1 - Height\n 2 - Base\n 3 - Hypotenuse\n\n > ";
	cin >> decisionChoice;

	if (decisionChoice == 1 || decisionChoice == 2)          // If they need the Height or Base
	{
		cout << "Please input the length of the hypotenuse\n > ";
		cin >> sideC;
		cout << "\nPlease input the length of the side\n > ";
		cin >> sideA;

		sideB = pow(sideC, 2) - pow(sideA, 2);
		sideB = sqrt(sideB);

		perim = sideA + sideB + sideC;
		area = (sideA * sideB) / 2;

		cout << "The length of your missing side is " << sideB << "\nThe length of your perimeter is " << perim << "\nThe area of the triangle is " << area << "\n\n\n" << endl;
	}

	else if (decisionChoice == 3)          // If they need the Hypotenuse
	{
		cout << "Please input the length of your first side.\n > ";
		cin >> sideA;
		cout << "Please input the length of your second side.\n > ";
		cin >> sideB;

		sideC = sqrt(pow(sideA, 2) + pow(sideB, 2));

		perim = sideA + sideB + sideC;
		area = (sideA * sideB) / 2;

		cout << "The length of your Hypotenuse is " << sideC << "\nThe length of your perimeter is " << perim << "\nThe area of the triangle is " << area << "\n\n" << endl;
	}
	else          // If they are a dumbass at one point...
	{
		cout << "You didn't pick an avaible option.\nPlease try again, from the begining.\n" << endl;
		right();
	}
}

void euqilateral()
{
	cout << "What are you trying to solve?\n 1 - Height\n 2 - Side\n > ";
	cin >> decisionChoice;

	if (decisionChoice == 1)          // If they need the height.
	{
		cout << "Please input the length of the sides.\n > ";
		cin >> sideA;

		perim = sideA * 3;
		area = sideA * (sideA*(sqrt(3)) / 2);
		sideB = (sideA*sqrt(3)) / 2;

		cout << "The length of your height is " << sideB << "\nThe length of your perimeter is " << perim << "\nThe area of the triangle is " << area << "\n\n" << endl;

		cout << endl;
	}
	else if (decisionChoice == 2)          // If they need the sides.
	{
		cout << "What is the area?\n > ";
		cin >> sideA;

		sideB = ((2 / 3)*pow(3, 3 / 4))*sqrt(sideA);

		perim = sideB * 3;

		cout << "The length of your perimeter is " << perim << "\nThe length of a side is " << sideB << "\n\n";
	}
	else         // If they are a dumbass...
	{
		cout << "That wasn't a valid option...\n" << endl;
		euqilateral();
	}
}

void Isosceles()
{
	cout << "Which is unknown\n 1 - base\n 2 - height\n 3 - sides\n > ";
	cin >> decisionChoice;

	if (decisionChoice == 1)          // If they need to find the base.
	{
		cout << "What is the length of your sides?\n > ";
		cin >> sideA;

		cout << "What is the length of your height?\n > ";
		cin >> sideB;

		sideC = 2 * sqrt(pow(sideA, 2) - pow(sideB, 2));

		perim = (sideA * 2) + sideC;
		area = (sideC * sideB) / 2;

		cout << "The length of your base is " << sideC << "\nThe perimeter is " << perim << "\nThe area is " << area << endl;
	}
	else if (decisionChoice == 2)          // If they need to find the height.
	{
		cout << "What are the lengths of the sides?\n > ";
		cin >> sideA;

		cout << "What is the length of the base?\n > ";
		cin >> sideB;

		sideC = sqrt(pow(sideA, 2) - (pow(sideB, 2) / 4));

		perim = sideC * 2 + sideA;
		area = (sideA * sideB) / 2;

		cout << "The length of the height is " << sideC << "\nThe length of the perimeter is " << perim << "\nThe area is " << area << endl;
	}
	else if (decisionChoice == 3)          //If they need to find a side.
	{
		cout << "What is the length of the base?\n > ";
		cin >> sideA;

		cout << "What is the length of the height?\n > ";
		cin >> sideB;

		sideC = 0.5 * sqrt(pow(sideA, 2) + (4 * pow(sideB,2)));

		perim = (sideC * 2) + sideA;
		area = (sideA*sideB) / 2;

		cout << "The length of the side is " << sideC << "\nThe length of the perimeter is " << perim << "\nThe area is " << area << endl;
	}
	else          // If they are a dumbass.
	{
		cout << "You didn't pick an avaible option.\nPlease try again, from the begining.\n" << endl;
		Isosceles();
	}
}

int main()
{
	cout << "\nPlease only input numbers." << endl;
	cout << endl;
	cout << "Which triangle are you solving for? \n 1 - Right\n 2 - Equilateral\n 3 - Isosceles\n\n > ";
	cin >> triangleChoice;

	if (triangleChoice == 1)          // If the Right is picked.
	{
		right();
	}
	else if (triangleChoice == 2)          // If Equilateral is picked.
	{
		euqilateral();
	}
	else if (triangleChoice == 3)          // If Isosceles is picked.
	{
		Isosceles();
	}
	else         // If they are a dumbass...
	{
		cout << "That wasn't a valid option...\n" << endl;
		main();
	}

	cout << endl;
	system("Pause");
	return(0);
}
