/*
4.10.18
Door Prize
Darian Callahan
*/

#include <iostream>
using namespace std;
int main()
{
	int doorChoice;

	cout << "Please pick door 1, 2, or 3.\n > ";
	cin >> doorChoice;

	if (doorChoice == 1)
	{
		cout << "Prize behind door 1 is $10 coupon to McDonalds." << endl;
	}
	else if (doorChoice == 2)
	{
		cout << "Prize behind door 2 is the boy." << endl;
	}
	else if (doorChoice == 2)
	{
		cout << "Prize behind door 3 is an ok shirt." << endl;
	}
	else
	{
		cout << "\n You did not pick an available option.\n" << endl;
		main();
	}

	cout << endl;
	system("Pause");
	return(0);
}