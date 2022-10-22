#include <iostream>
using namespace std;
void display(char ch, int n)
{
    for (int i = 0; i < n; i++)
        cout << ch;
    cout << "\n";
}
void display(char ch)
{
    for (int i = 1; i <= 80; i++)
        cout << ch;
    cout << "\n";
}
void display()
{
    for (int i = 0; i < 80; i++)
        cout << '*';
    cout << "\n";
}

int main()
{
    char ch;
    int n;
    display('%', 5);
    display('$');
    display();
    return 0;
}