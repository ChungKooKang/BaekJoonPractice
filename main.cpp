#include <iostream>
using namespace std;
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	const int DIVIDEVALUE{ 42 };
	int input, count;
	int array[10];

	for (int i = 0; i < 10; i++)
	{
		cin >> input;

		array[i] = input % DIVIDEVALUE;

		for (int j = 0; j < i; j++)
		{
			if (array[j] == array[i])
			{
				count--;
				break;
			}
		}

		count++;

	}

	cout << count;


}
