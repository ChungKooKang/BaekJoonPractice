#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	char array[1000]{};
	int caseNum, sum{}, beforeScore{};
	cin >> caseNum;
	for (int i = 0; i < caseNum; i++)
	{
		cin >> array;
		
		for (int j = 0; j < ; j++)
		{
			if (array[j] == 'O')
			{
				beforeScore++;
				sum += beforeScore;
			}
			else
			{
				beforeScore = 0;
			}
		}
		
	}
	cout << sum;
	
}