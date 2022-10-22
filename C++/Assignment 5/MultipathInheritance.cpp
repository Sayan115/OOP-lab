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

class B : virtual public A
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
class C : virtual public A
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
class D : public B, public C
{
public:
    D()
    {
        cout << "Constructor of D called\n";
    }
    ~D()
    {
        cout << "Destructor of D called\n";
    }
};
int main()
{
    D t;
    return 0;
}