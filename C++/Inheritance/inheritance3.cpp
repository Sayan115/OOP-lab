#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void show()
    {
        cin >> a;
        cout << a;
    }
};
class B : public A
{
public:
    int b;
};
int main()
{
    B b;
    b.show();
    return 0;
}
