#include <iostream>
using namespace std;
class B;
class A
{
    int a1, a2;

public:
    void input()
    {
        cout << "Enter distance in feet: ";
        cin >> a1;
        cout << "Enter distance in inches: ";
        cin >> a2;
    }
    friend void compare(A, B);
};
class B
{
    int b1, b2;

public:
    void input()
    {
        cout << "Enter distance in meter: ";
        cin >> b1;
        cout << "Enter distance in centimeter: ";
        cin >> b2;
    }
    friend void compare(A, B);
};
void compare(A t1, B t2)
{
    int s1 = t1.a1 * 12 + t1.a2;
    int s2 = t2.b1 * 100 + t2.b2;
    s1 = s1 * 2.45;
    if (s1 > s2)
        cout << "Larger: " << t1.a1 << "feet " << t1.a2 << "inches.";
    else
        cout << "Larger: " << t2.b1 << "meter " << t2.b2 << "centimeter.";
}
int main()
{
    A t1;
    B t2;
    t1.input();
    t2.input();
    compare(t1, t2);
    return 0;
}
