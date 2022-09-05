#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	// iostream speed up
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	string input[1000000];
	int i{};
	cin >> input[0];
	while (input[i] == "\n")
	{
		i++;
		cin >> input[i];
	}
}
