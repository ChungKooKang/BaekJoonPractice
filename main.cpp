#include <iostream>
#include <string>

/*
<��������>

��ȣ	: 1316

�̸�	: �׷� �ܾ� üĿ

��������:
�׷� �ܾ�� �ܾ �����ϴ� ��� ���ڿ� ���ؼ�, �� ���ڰ� �����ؼ� ��Ÿ���� ��츸�� ���Ѵ�.
���� ���, ccazzzzbb�� c, a, z, b�� ��� �����ؼ� ��Ÿ����, kin�� k, i, n�� �����ؼ� ��Ÿ����
������ �׷� �ܾ�������, aabbbccb�� b�� �������� ��Ÿ���� ������ �׷� �ܾ �ƴϴ�.�ܾ� N����
�Է����� �޾� �׷� �ܾ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�	:
ù° �ٿ� �ܾ��� ���� N�� ���´�. N�� 100���� �۰ų� ���� �ڿ����̴�. ��° �ٺ��� N���� �ٿ�
�ܾ ���´�. �ܾ�� ���ĺ� �ҹ��ڷθ� �Ǿ��ְ� �ߺ����� ������, ���̴� �ִ� 100�̴�.

���	:
ù° �ٿ� �׷� �ܾ��� ������ ����Ѵ�.

*/

/*
<����Ǯ������>

�ܾ� ���̰� 1,2 �� �˻� �ʿ� x
�ܾ� ���� 3 ���� ���ڰ� ó������ ������ �ִ��� Ȯ��
������ ���� ���ں��� ���� ���ڰ��� �� ���� �������� Ȯ��

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