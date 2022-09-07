#include <iostream>
#include <string>

using namespace std;

int ChangeOrder(int input);

int main()
{
	// iostream speed up
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	// variable declaration
	int firstInput, secondInput;

	// user input
	cin >> firstInput >> secondInput;

	// change the order of number
	firstInput = ChangeOrder(firstInput);
	secondInput = ChangeOrder(secondInput);

	// checking bigger & output
	cout <<( firstInput >= secondInput ? firstInput : secondInput);

}

int ChangeOrder(int input)
{
	input = input / 100 + input / 10 % 10 * 10 + input % 10 * 100;
	return input;
}
