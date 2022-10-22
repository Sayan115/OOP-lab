#include <iostream>
using namespace std;
class A
{
    int x;

public:
    void input()
    {
        cin >> x;
    }
    void display()
    {
        cout << x;
    }
    A operator +(A m)
    {
        A t;
        t.x = x * m.x;
        return t;
    }
};

int main()
{
    A a, b, c;
    a.input();
    b.input();
    c = a + b;
    c.display();
    return 0;
}