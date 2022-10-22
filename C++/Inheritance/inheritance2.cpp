#include <iostream>
using namespace std;
class A
{
public:
    int a;
};
class B : private A
{
public:
    int b;

    void input()
    {
        a=20;
        cout<<a;
    }
};
int main()
{
    B b;
    b.b = 30;
    b.input();
    return 0;
}