#include <iostream>
#include <string>

using namespace std;

int main()
{
	// iostream speed up
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	// variable declaration
	string input;
	int count{ 1 };

	// get one line
	getline(cin, input);

	// checking empty
	if (input.empty())
	{
		cout << '0';
		return 0;
	}

	// counting space
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == ' ')
		{
			count++;
		}
	}

	// checking first space
	if (input[0] == ' ')
		count--;

	// checking last space
	if (input[input.length() - 1] == ' ')
		count--;

	// output
	cout << count;
}
