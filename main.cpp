#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	string test{"���汸"};
	basic_string <char> test2{"���汸"};
	cout << "test1" << endl;
	cout << test.length() << endl;
	cout << test.size();
	cout << endl << endl;

	cout << "test2" << endl;
	cout << test2.length() << endl;
	cout << test2.size() << endl;



}
