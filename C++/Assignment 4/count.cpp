#include <iostream>
using namespace std;
class Count
{
    static int c;

public:
    void count()
    {
        c++;
    }
    static void display()
    {
        cout << c;
    }
};
int Count::c;
int main()
{
    Count c1, c2;
    c1.count();
    c2.count();
    Count::display();
    return 0;
}
