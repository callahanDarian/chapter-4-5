/*
4.10.18
Guessing Game
Darian Callahan
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
	int choice;
	int secret;

	srand(time(NULL));
	secret = rand() % 10 + 1;

	std::cout << "Please pick a number between 1 and 10\n > ";
	std::cin >> choice;

		if (choice == secret)
		{
			std::cout << "You guessed " << secret << ", the correct number." << std::endl;
		}
		else
		{
			std::cout << "Wrong number" << std::endl;
		}

	std::cout << std::endl;
	main();
}