#include <iostream>
using namespace std;
void SelfNumber();
int main()
{
	SelfNumber();
}

void SelfNumber()
{
	int num;
	bool checker{false};
	for (int i = 1; i < 10001; i++)
	{
		num = i;

		for (int j = 1; j < num; j++)
		{
			if (num == j + (j - j % 10000) / 10000 + (j - j % 1000) / 1000 + (j - j % 100) / 100 + (j - j % 10)/10 + j / 10)
			{
				checker = false;
			}

		}
		if (checker)
		{
			cout << num << endl;
		}
		checker = true;
		
	}
}
