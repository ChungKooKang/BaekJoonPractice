#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    vector<int> v;
    cout << "== ���� �߰� �� ==" << endl << endl;
    cout << "���Ҹ� �߰��ϱ� ��" << endl
        << "size()     : " << v.size() << endl
        << "capacity() : " << v.capacity() << endl
        << "max_size() : " << v.max_size() << endl << endl;
	// variable declaration
	string input;
	int time{};

    cout << "== ���� �߰� ==" << endl << endl;

    for (int i = 1; i < 10; i++)
    {
        v.push_back(i);
        cout << "push_back(" << i <<") �߰� ��" << endl
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

    cout << "== ���� ���� ==" << endl << endl;

    for (int i = 1; i < 10; i++)
    {
        v.pop_back();
        cout << "pop_back(" << 10 - i << ") ���� ��" << endl
            << "size()     : " << v.size() << endl
            << "capacity() : " << v.capacity() << endl
            << "max_size() : " << v.max_size() << endl << endl;
    }

	// output
	cout << time << endl;
}

