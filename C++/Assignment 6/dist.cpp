#include <iostream>
using namespace std;
class v
{
    int v1;

public:
    void in()
    {
        cout << "enter:";
        cin >> v1;
    }
    void operator==(v i)
    {
        if (v1 == i.v1)
        {
            printf("equal");
        }
        else
        {
            printf("not equal");
        }
    }
};
int main()
{
    v i1, i2;
    i1.in();
    i2.in();
    i1 == i2;
}