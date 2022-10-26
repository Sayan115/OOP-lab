#include <iostream>
using namespace std;
class t
{
    int second;

public:
    t(int s = 0)
    {
        second = s;
    }
    t operator+(t A)
    {
        t temp;
        temp.second = second + A.second;
        return temp;
    }
    void operator==(t A)
    {
        if (second == A.second)
        {
            cout << "Equal" << endl;
        }
        else
        {
            cout << "Unequal" << endl;
        }
    }
    t operator=(int s)
    {
        t temp;
        temp.second = s;
        return temp;
    }
    void in()
    {
        cout << "Enter:";
        cin >> second;
    }
    void display()
    {
        cout << second << " second " << endl;
    }
};

int main()
{
    t a, b;
    a.in();
    b.in();
    t c = a + b;
    t d;
    d.in();
    a.display();
    b.display();
    c.display();
    d.display();
    a == b;
}