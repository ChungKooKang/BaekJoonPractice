#include <iostream>
#include <algorithm>
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
			if (num == j + (j % 100000) / 10000 + (j % 10000) / 1000 + (j % 1000) / 100 + (j % 100)/10 + (j % 10))
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
