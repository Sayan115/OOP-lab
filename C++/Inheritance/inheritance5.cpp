#include <iostream>
using namespace std;
class A
{
protected:
    int a;
};
class B : public A
{
public:
    int b;
    show()
    {
        cin>>a;
        cout<<a;
    }
};
int main()
{
    B b;
    b.b = 30;
    b.show();
    return 0;
}