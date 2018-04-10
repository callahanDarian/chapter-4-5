#include <iostream>

int main()
{
	using namespace std;

	double age;

	cout << "Input your age\n > ";
	cin >> age;
	if (age < 0)
	{
		cout << "They should abort you while they still can." << endl;
	}
	if (age < 5)
	{
		cout << "You can't even read." << endl;
	}
	else if (age < 15)
	{
		cout << "You're actually off of your phone?" << endl;
	}
	else if (age < 20)
	{
		cout << "Shouldn't you be working instead of fucking around on bad excuses of games?  This economy won't fix itself." << endl;
	}
	else if (age < 35)
	{
		cout << "Are you still stumbling around and looking for food, or do you actually have your life together?" << endl;
	}
	else if (age < 50)
	{
		cout << "I thought you were a raisin." << endl;
	}
	else if (age < 75)
	{
		cout << "Don't step outside; your flaps will catch the wind." << endl;
	}
	else if (age < 100)
	{
		cout << "I thought you would be six feet under by now." << endl;
	}
	else
	{
		cout << "Jeez y u so old" << endl;
	}
	main();
}