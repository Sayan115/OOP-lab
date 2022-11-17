#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int x = a - b;
    try
    {
        if (x > 0)
        {
            cout << (a / x);
        }
        else if (x < 0)
        {
            throw('N');
        }
        else
        {
            throw(x);
        }
    }
    catch (...)
    {
        cout << "Exception\n";
    }
}