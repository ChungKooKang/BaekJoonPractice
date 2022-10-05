#include <iostream>
#include <string>

/*
<문제설명>

번호	: 1316

이름	: 그룹 단어 체커

문제설명:
그룹 단어란 단어에 존재하는 모든 문자에 대해서, 각 문자가 연속해서 나타나는 경우만을 말한다.
예를 들면, ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고, kin도 k, i, n이 연속해서 나타나기
때문에 그룹 단어이지만, aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.단어 N개를
입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오.

입력	:
첫째 줄에 단어의 개수 N이 들어온다. N은 100보다 작거나 같은 자연수이다. 둘째 줄부터 N개의 줄에
단어가 들어온다. 단어는 알파벳 소문자로만 되어있고 중복되지 않으며, 길이는 최대 100이다.

출력	:
첫째 줄에 그룹 단어의 개수를 출력한다.

*/

/*
<문제풀이전략>

단어 길이가 1,2 면 검사 필요 x
단어 길이 3 부터 글자가 처음부터 같은게 있는지 확인
있으면 같은 문자부터 지금 문자같이 다 같은 문자인지 확인

*/

using namespace std;

int main()
{
	int inputNum;
	int count{};
	bool checker{true};
	string inputString;
	cin >> inputNum;
	for (int wordNum = 0; wordNum < inputNum; wordNum++)
	{
		cin >> inputString;
		if (inputString.length() > 2)
		{
			for (int checkingLetter = 0; checkingLetter < inputString.length(); checkingLetter++)
			{
				for (int sameStart = 0; sameStart < checkingLetter; sameStart++)
				{
					if (inputString[checkingLetter] == inputString[sameStart])
					{
						for (int i = sameStart; i < checkingLetter; i++)
						{
							if (inputString[i] != inputString[checkingLetter])
								checker = false;
						}
					}
				}
			}
		}

		if (checker == true) count++;

		checker = true;
	}

	cout << count;
}