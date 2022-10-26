#include <iostream>
using namespace std;
class B
{
    int m, n;

public:
    B()
    {
        m = 0;
        n = 0;
    }
    B(int k, int j)
    {
        m = k;
        n = j;
    }
    int mi()
    {
        return m;
    }
    int ni()
    {
        return n;
    }
    void show()
    {
        cout << m << n;
    }
};

class A
{
    int a, b;

public:
    A()
    {
        a = 0;
        b = 0;
    }
    A(B obj)
    {
        a = obj.mi();
        b = obj.ni();
    }
    void show()
    {
        cout << a << b;
    }
};

int main()
{
    A ob1;
    B obj(7, 2);
    ob1 = obj;
    ob1.show();
}