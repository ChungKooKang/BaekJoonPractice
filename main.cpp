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

    cout << "== 원소 추가 ==" << endl << endl;

    for (int i = 1; i < 10; i++)
    {
        v.push_back(i);
        cout << "push_back(" << i <<") 추가 후" << endl
            << "size()     : " << v.size() << endl
            << "capacity() : " << v.capacity() << endl
            << "max_size() : " << v.max_size() << endl << endl;
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

}

