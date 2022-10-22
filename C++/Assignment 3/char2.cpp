#include <iostream>
using namespace std;
void print(char a = '*', int b = 80)
{
    for (int i = 0; i < b; i++)
        cout << a;
}

int main()
{
    print('$', 10);
    print('+');
    print();
}