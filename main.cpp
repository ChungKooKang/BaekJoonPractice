#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    vector<int> v;
    cout << "== 원소 추가 전 ==" << endl << endl;
    cout << "원소를 추가하기 전" << endl
        << "size()     : " << v.size() << endl
        << "capacity() : " << v.capacity() << endl
        << "max_size() : " << v.max_size() << endl << endl;
	// variable declaration
	string input;
	int time{};

    cout << "== 원소 추가 ==" << endl << endl;

    for (int i = 1; i < 10; i++)
    {
        v.push_back(i);
        cout << "push_back(" << i <<") 추가 후" << endl
            << "size()     : " << v.size() << endl
            << "capacity() : " << v.capacity() << endl
            << "max_size() : " << v.max_size() << endl << endl;
    }
	// change to num + calculating time
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] != 'Z')
			if (input[i] - 'A' > 17)
				time += ((input[i] - 'A' - 1) / 3 + 3);
			else
			time += ((input[i] - 'A') / 3) + 3;
		else
			time += 10;
	}

    cout << "== 원소 제거 ==" << endl << endl;

    for (int i = 1; i < 10; i++)
    {
        v.pop_back();
        cout << "pop_back(" << 10 - i << ") 제거 후" << endl
            << "size()     : " << v.size() << endl
            << "capacity() : " << v.capacity() << endl
            << "max_size() : " << v.max_size() << endl << endl;
    }

	// output
	cout << time << endl;
}

