#include <iostream>
using namespace std;

template <typename T1, typename T2>
class A
{
    T1 a;
    T2 b;

public:
    void input()
    {
        cin >> a;

        cin >> b;
    }

    void display()
    {
        cout << a << " " << b;
    }
};

int main()
{
    A<int,float> a1;
    a1.input();
    a1.display();
}
