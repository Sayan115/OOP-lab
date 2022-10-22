#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "Constructor of A called\n";
    }
    ~A()
    {
        cout << "Destructor of A called\n";
    }
};

class B
{
public:
    B()
    {
        cout << "Constructor of B called\n";
    }
    ~B()
    {
        cout << "Destructor of B called\n";
    }
};
class C : public A, public B
{
public:
    C()
    {
        cout << "Constructor of C called\n";
    }
    ~C()
    {
        cout << "Destructor of C called\n";
    }
};
int main()
{
    C t;
    return 0;
}