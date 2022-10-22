#include <iostream>
using namespace std;
class Volume
{
    int r, l, b;
    double h, t;

public:
    void volume(double a)
    {
        cout << "Volume: " << 22.0 / 7 * a * a * 4.0 / 3 << endl;
    }

    void volume(double a, double b)
    {
        cout << "Volume: " << a * a * b * 22.0 / 7 << endl;
    }

    void volume(double a, double b, double c)
    {
        cout << "Volume: " << a * b * c << endl;
    }

    void input()
    {
        cout << "Enter the radius(sphere): ";
        cin >> r;
        volume(r);
        cout << "Enter the radius and height(cylinder): ";
        cin >> l;
        cin >> b;
        volume(l, b);
        cout << "Enter the length, breadth and height(cuboid): ";
        cin >> l;
        cin >> h;
        cin >> t;
        volume(h, l, t);
    }
};
int main()
{
    Volume ob1;
    ob1.input();
}