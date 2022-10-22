#include <iostream>
using namespace std;
class Array
{
public:
    int a[100];
    friend istream &operator>>(istream &din, Array &o);
    friend ostream &operator<<(istream &dout, Array &o);
};

istream &operator>>(istream &din, Array &o)
{
    cout << "Enter elements:\n";
    for (int i = 0; i < 5; i++)
        cin >> o.a[i];
    return din;
}
ostream &operator<<(ostream &dout, Array &o)
{
    cout << "\nElements:\n";
    for (int i = 0; i < 5; i++)
        cout << o.a[i] << "  ";
    return dout;
}

int main()
{
    Array a1;
    cin >> a1;
    cout << a1;
    return 0;
}