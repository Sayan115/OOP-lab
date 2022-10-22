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
    friend void sum(A, B);
};
class B
{
    int b;

public:
    void input()
    {
        cin >> b;
    }
    friend void sum(A, B);
};

void sum(A t1, B t2)
{
    cout << t1.a + t2.b;
}

int main()
{
    A k1;
    B k2;
    k1.input();
    k2.input();
    sum(k1, k2);
}