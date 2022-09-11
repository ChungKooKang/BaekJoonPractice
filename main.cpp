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

    cout << "== ���� �߰� ==" << endl << endl;

    for (int i = 1; i < 10; i++)
    {
        v.push_back(i);
        cout << "push_back(" << i <<") �߰� ��" << endl
            << "size()     : " << v.size() << endl
            << "capacity() : " << v.capacity() << endl
            << "max_size() : " << v.max_size() << endl << endl;
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

}

