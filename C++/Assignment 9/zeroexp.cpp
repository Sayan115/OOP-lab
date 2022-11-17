#include <iostream>
using namespace std;
int main()
{
    int a, b;

    cout << "Enter the value of a and b: ";
    cin >> a >> b;
    int res;
    try
    {
        if (b != 0)
        {
            res = a / b;
            cout << res;
        }
        else
            throw(b);
    }

    catch (int b)
    {
        cout << "The value of b is 0";
    }
}