#include <iostream>
using namespace std;
class Complex
{
private:
    int a;
    int i;

public:
    Complex()
    {
        a = 0;
        i = 0;
    }
    Complex(int n, int m)
    {
        a = n;
        i = m;
    }
    Complex(Complex &obj)
    {
        a = obj.a;
        i = obj.i;
    }
    ~Complex()
    {
        cout << "Destructor called\n";
    }
    void display()
    {
        cout << a << "+" << i << "i" << endl;
    }
};
int main()
{
    int s1, s2;
    cout << "Enter the real part: ";
    cin >> s1;
    cout << "Enter the img part: ";
    cin >> s2;
    Complex();
    Complex obj1(s1, s2);
    Complex obj2(obj1);

    obj2.display();
}
