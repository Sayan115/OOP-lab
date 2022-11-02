#include <iostream>
using namespace std;
class A
{
protected:
    int a;

public:
    virtual void input() = 0;
    virtual void show() = 0;
};
class B : public A
{

public:
    void input()
    {
        cin >> a;
    }
    void show()
    {
        cout << a;
    }
};

int main()
{
    A *p;
    B m;
    p = &m;
    p->input();
    p->show();
    return 0;
}