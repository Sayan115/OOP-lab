#include <iostream>
using namespace std;
class complex
{
private:
    int r1;
    int i1;
    int r2;
    int i2;

public:
    void get(void);
    void add(void);
    void sub(void);
};
void complex::get(void)
{
    cout << "Enter first complex no\n";
    cout << "enter real part=";
    cin >> r1;
    cout << "enter imaginary part=";
    cin >> i1;
    cout << "\nEnter second complex no:\n";
    cout << "enter real part=";
    cin >> r2;
    cout << "enter imaginary part=";
    cin >> i2;
}
void complex::add(void)
{
    cout << "addition\n";
    cout << r1 + r2 << "+" << i1 + i2 << "i" << endl;
}
void complex::sub(void)
{
    cout << "substraction\n";
    cout << r1 - r2 << "-" << i1 - i2 << "i" << endl;
}
int main()
{
    complex c;
    c.get();
    int o;
    cout << "choose\n1.add\n2.substract\n";
    cin >> o;
    switch (o)
    {
    case 1:
    {
        c.add();
        break;
    }
    case 2:
    {
        c.sub();
        break;
    }
    default:
    {
        cout << "invalid choosen\n";
        break;
    }
    }
}