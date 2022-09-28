#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> alphabat {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
	int idx;
	string input;
	cin >> input;

	for (int i = 0; i < alphabat.size(); i++)
	{
		while (1)
		{
			idx = input.find(alphabat[i]);
			if (idx == string::npos) break;

			input.replace(idx, alphabat[i].length(), "#");
		}
	}
	cout << input.length();
}