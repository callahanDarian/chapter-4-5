#include <iostream>
#include <string>

int main()
{
	using namespace std;

	int bookScanID = 0;
	string bookOwner = "FAKE BOY! IMPOSTER";

	cout << "Book ID Number\n\nPlease enter the number here\n > ";
	cin >> bookScanID;

	switch (bookScanID)
	{
	case 326064:
		bookOwner = "Mine";
		break;
	default:
		break;
	}
	cout << bookOwner << endl;

	cout << endl;
	main();
}