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
    Complex(int k, int l)
    {
        a = k;
        b = l;
    }
    void show()
    {
        cout << a << "+i" << b;
    }
    operator int()
    {
        return b;
    }
};
int main()
{
    Complex c(3, 4);
    int x;
    x = c;
    c.show();
}