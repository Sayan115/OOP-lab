#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void input()
    {
        cin >> a;
    }
    friend void display(A);
};

void display(A t)
{
    cout << t.a;
}

main()
{
    A k;
    k.input();
    display(k);
}