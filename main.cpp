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
	int time{};

	// input
	cin >> input;

	// change to num + calculating time
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] != 'Z')
			if (input[i] - 'A' > 17)
				time += ((input[i] - 'A' - 1) / 3 + 3);
			else
			time += ((input[i] - 'A') / 3) + 3;
		else
			time += 10;
	}

	// output
	cout << time << endl;
}
