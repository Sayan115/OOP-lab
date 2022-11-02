#include <iostream>
using namespace std;
class shape
{
public:
    int area;
    virtual void in1()
    {
        area = 0;
    }
    virtual void a1()
    {
        cout << area;
    }
};
class Circle : public shape
{
    int r;

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
    int base, height;

public:
    void in1()
    {
        cout << "Base: ";
        cin >> base;
        cout << "Height: ";
        cin >> height;
    }
    void a1()
    {
        cout << "Area of Triangle: " << 0.5 * base * height << "\n";
    }
};
class Square : public shape
{
    int length;

public:
    void in1()
    {
        cout << "Length: ";
        cin >> length;
    }
    void a1()
    {
        cout << "Area of Square: " << length * length << "\n";
    }
};

int main()
{
    shape *p;
    Circle o1;
    p = &o1;
    p->in1();
    p->a1();
    Tri o2;
    p = &o2;
    p->in1();
    p->a1();
    Square o3;
    p = &o3;
    p->in1();
    p->a1();
    return 0;
}