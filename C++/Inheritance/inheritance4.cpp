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
class B : private A
{
public:
    int b;
    void call()
    {
        show();
    }
};
int main()
{
    B b;
    b.call();
    return 0;
}