#include <iostream>
using namespace std;

class Number
{private:
    int a;
    public:
    void input()
    {
        cin >> a;
    }
    void output()
    {
        cout<<"The number is: "<<a;
    }
    Number add(Number n2)
    {
        Number n3;
        n3.a=a+n2.a;
        return n3;
    }
};

int main()
{
    Number n1,n2,n3;
    cout<<"Enter the numbers: ";
    n1.input();
    n2.input();
    n3=n1.add(n2);
    n3.output();
}