#include <iostream>
using namespace std;
class Time1
{
private:
    int h;
    int m;

public:
    Time1()
    {
        h = 0;
        m = 0;
    }
    Time1(int n, int n2 = 0)
    {
        h = n;
        m = n2;
    }
    Time1(Time1 &obj)
    {
        h = obj.h;
        m = obj.m;
    }
    ~Time1()
    {
        cout << "Destructor called\n";
    }
    void display()
    {
        cout << h << ":" << m << endl;
    }
};
int main()
{
    int s1, s2;
    cout << "Enter time in hh:mm format: ";
    cin >> s1 >> s2;
    Time1();
    Time1 obj1(s1, s2);
    Time1 obj2 (obj1);

    obj2.display();
}
