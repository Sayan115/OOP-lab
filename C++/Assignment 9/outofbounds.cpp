#include <iostream>
using namespace std;
int main()
{
    int n = -1;
    int a[] = {1, 2, 3, 4, 5};
    cout << "Enter index to print: ";
    cin >> n;
    try
    {
        if (n < 5 && n >= 0)
        {
            cout << a[n];
        }
        else
            throw(n);
    }

    catch (int n)
    {
        cout << "invalid index";
    }
}