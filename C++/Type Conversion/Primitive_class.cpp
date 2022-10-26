#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int k)
    {
        a = k;
        b = 0;
    }
    void show()
    {
        cout << a << b;
    }
};
int main()
{
    Complex c;
    int x = 5;
    c = x;
    c.show();
}