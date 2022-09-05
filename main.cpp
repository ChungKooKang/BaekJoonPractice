#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	// iostream speed up
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	// variable declaration
	char input[1000000];
	int counter[26]{};
	int max{-1}, maxIndex{};

	// input
	cin >> input;
	int len = strlen(input);
	// count the number of alphabet
	for (int i = 0; i < len; i++)
	{
		// Capital letter checking
		if (input[i] < 'a')
			counter[input[i] - 65]++;

		// samall letter checking
		if (input[i] >= 'a')
			counter[input[i] - 97]++;
	}

	// figure out whether it is max
	for (int i = 0; i < 26; i++)
	{
		if (counter[i] != 0)
			if (max < counter[i])
			{
				max = counter[i];
				maxIndex = i;
			}
			else if (max == counter[i])
			{
				max = -1;
				break;
			}
	}


	if (max != -1)
		cout << (char)(maxIndex + 65);
	else
		cout << '?';
	
}
