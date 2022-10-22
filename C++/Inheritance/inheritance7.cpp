#include <iostream>
using namespace std;
class A
{
protected:
    int a;
};
class B : protected A
{
public:
    int b;
    void show()
    {
        a = 10;
        cout << a;
    }
};
int main()
{
    B b;
    b.b = 30;
    cout << b.b;
    b.show();
    return 0;
}