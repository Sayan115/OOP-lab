#include <iostream>
using namespace std;
class shape
{
protected:
    int r, base, height, length, breadth;
};
class Circle : public shape
{

public:
    void in1()
    {
        cout << "Radius: ";
        cin >> r;
    }
    void a1()
    {
        cout << "Area of circle: " << 22.0 / 7 * r * r << "\n";
    }
};
class Tri : public shape
{

public:
    void in2()
    {
        cout << "Base: ";
        cin >> base;
        cout << "Height: ";
        cin >> height;
    }
    void a2()
    {
        cout << "Area of Triangle: " << 0.5 * base * height << "\n";
    }
};
class Rec : public shape
{

public:
    void in3()
    {
        cout << "Length: ";
        cin >> length;
        cout << "Breadth: ";
        cin >> breadth;
    }
    void a3()
    {
        cout << "Area of Rectangle: " << length * breadth << "\n";
    }
};

int main()
{
    Circle o1;
    o1.in1();
    o1.a1();
    Tri o2;
    o2.in2();
    o2.a2();
    Rec o3;
    o3.in3();
    o3.a3();
    return 0;
}