#include <iostream>
using namespace std;

int main()
{
	

	int input, count{}, digit{1};
	cin >> input;

	for (int i = 1; i < input + 1; i++)
	{
		int temp{ i };
		for (int j = 0; j < 4; j++)
		{
			temp = temp / 10;
			if (temp)
			{
				digit++;
			}
		}


		if (digit == 1 || digit == 2 || (digit ==3 &&( (i % 100 / 10 - i % 10) == (i /100 - i % 100 / 10) ))) // (십의 자리 - 일의 자리) == (백의 자리 - 십의 자리)
		{
			count++;
		}

		// 초기화

		digit = 1;
	}
	cout << count;
}
