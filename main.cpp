#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> croatian = { "c=", "c-", "dz=","d-", "lj", "nj", "s=", "z="};
	int idx;
	string input;
	cin >> input;

	for (int i = 0; i < croatian.size(); i++)
	{
		while (1)
		{
			idx = input.find(croatian[i]);	// string::find function is used to find the first character of the first match.
			if (idx == string::npos) break;

			input.replace(idx, croatian[i].length(), "#");
		}
	}
	cout << input.length();
}
