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
			for (int checkingLetter = 2; checkingLetter < inputString.length(); checkingLetter++) // 0���� �˻��� �ʿ䰡 ���� 2�����ص� ��
			{
				for (int isSameStart = 0; isSameStart < checkingLetter -1; isSameStart++)	// checkingLetter �ٷ� ���� �˻��� �ʿ� ���� ���������� �ϸ� ��
				{
					if (inputString[checkingLetter] == inputString[isSameStart])
					{
						for (int i = isSameStart; i < checkingLetter; i++)
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