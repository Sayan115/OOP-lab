#include <iostream>
using namespace std;
class d
{
    int dist;

public:
    d(int s = 0)
    {
        dist = s;
    }
    d operator+(d A)
    {
        d temp;
        temp.dist = dist + A.dist;
        return temp;
    }
    void operator==(d A)
    {
        if (dist == A.dist)
        {
            cout << "Equal" << endl;
        }
    }
    void operator>(d A)
    {
        if (dist > A.dist)
        {
            cout << dist << "m is greater";
        }
        else if (dist < A.dist)
        {
            cout << A.dist << "m is greater";
        }
    }
    d operator=(int s)
    {
        d temp;
        temp.dist = s;
        return temp;
    }
    void in()
    {
        cout << "Enter:";
        cin >> dist;
    }
    void display()
    {
        cout << dist << " m " << endl;
    }
};

int main()
{
    d a, b;
    a.in();
    b.in();
    d c = a + b;
    a.display();
    b.display();
    c.display();
    a == b;
    a > b;
}