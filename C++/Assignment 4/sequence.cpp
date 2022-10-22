#include <iostream>
using namespace std;
class A
{
private:
    int a;
    int i;

public:
    A()
    {
        cout << "A() is called\n";
    }
    A(int n, int m)
    {
        cout << "A(int,int) is called\n";
    }
    A(A &obj)
    {
        a = obj.a;
        i = obj.i;
        cout << "A(A &) is called\n";
    }
    ~A()
    {
        cout << "Destructor called\n";
    }
};
int main()
{
    A();
    A obj1(0, 0);
    A obj2(obj1);
}
