#include <iostream>
using namespace std;
class A
{
public:
    int a;
};
class B : public A
{
public:
    int b;
};
int main()
{
    B b;
    b.a = 20;
    b.b = 30;
    cout << b.b;
    return 0;
}