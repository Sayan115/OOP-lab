#include <iostream>
using namespace std;
class Increment
{
    int c, i;

public:
    void input()
    {
        cin >> c >> i;
    }
    Increment operator+(Increment a)
    {
        Increment t;
        t.c = c + a.c;
        t.i = i + a.i;
        return t;
    }
    Increment operator++(int)
    {
        Increment t;
        t.c = ++c;
        t.i = ++i;
        return t;
    }
    Increment operator++()
    {
        Increment t;
        t.c = c++;
        t.i = i++;
        return t;
    }
    void show()
    {
        cout << c << "+i" << i << "\n";
    }
};

int main()
{
    Increment a, b, c, d, e;
    a.input();
    b.input();
    c = a + b;
    c.show();
    d = c++;
    d.show();
    e = ++c;
    e.show();
    return 0;
}
