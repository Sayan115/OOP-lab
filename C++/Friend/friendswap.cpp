#include <iostream>
using namespace std;
class B;
class A
{
    int a;

public:
    void input()
    {
        cin >> a;
    }
    friend void swap(A &, B &);
};
class B
{
    int b;

public:
    void input()
    {
        cin >> b;
    }
    friend void swap(A &, B &);
};
void swap(A &t1, B &t2)
{
    int p = t1.a;
    t1.a = t2.b;
    t2.b = p;
    cout<<t1.a<<" "<<t2.b;
}
int main()
{
    A t1;
    B t2;
    t1.input();
    t2.input();
    swap(t1 , t2 );
    return 0;
}
