#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    A()
    {
        a = 0;
        b = 0;
    }
    A(int k, int j)
    {
        a = k;
        b = j;
    }
    int ai(int t1)
    {
        a = t1;
    }
    int bi(int t2)
    {
        b = t2;
    }
    void show()
    {
        cout << a << b;
    }
};
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

int main()
{
    B obj(7, 2);
    A ob1(obj.mi, obj.ni);
    ob1.show();
}