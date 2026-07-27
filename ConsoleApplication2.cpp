#include <iostream>
using namespace std;

int inputNumber()
{
	int iNumber;
	cin >> iNumber;
	return iNumber;
}

int main()
{
	int firstValue;
	cout << "Please key in first number: ";
	firstValue = inputNumber();
	cout << "Your number is " << firstValue << endl;

	int secondValue;
	cout << "Please key in first number: ";
	secondValue = inputNumber();
	cout << "Your number is " << secondValue << endl;

	int thirdValue;
	cout << "Please key in first number: ";
	thirdValue = inputNumber();
	cout << "Your number is " << thirdValue << endl;

	int sum = firstValue + secondValue;
	int diff = firstValue - thirdValue;
	int product = firstValue * secondValue * thirdValue;

	cout << "The sum of first and second number is " <<  sum << "\n";
	cout << "The diff og first and third number is " <<  diff << "\n";
	cout << "The product of all number is " <<  product << "\n";

	return 0;
}

