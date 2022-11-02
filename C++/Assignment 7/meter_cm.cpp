#include <iostream>
using namespace std;
class cm
{
    double a;

public:
    cm()
    {
        a = 0;
    }
    cm(int k)
    {
        a = k;
    }
    void ai(double t1)
    {
        a = t1 * 100.0;
    }
    void show()
    {
        cout << a;
    }
};
class m
{
    double mm;

public:
    m()
    {
        mm = 0.0;
    }
    m(double k)
    {
        mm = k;
    }
    operator cm()
    {
        cm t;
        t.ai(mm);
        return t;
    }
    void show()
    {
        cout << mm;
    }
};

int main()
{
    m obj(7.5);
    cm ob1;
    ob1 = obj;
    ob1.show();
}