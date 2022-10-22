#include <iostream>
using namespace std;
class M
{
    int marks;
    static int max;

public:
    void input()
    {
        cout << "Enter marks: ";
        cin >> marks;
    }

    int get()
    {
        return marks;
    }

    void fm(int p)
    {
        if (p > max)
            p = max;
    }

    static void display()
    {
        cout << max;
    }
};
int M::max;
int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    M s[n];
    for (int i = 0; i < n; i++)
        s[i].input();
    for (int i = 0; i < n; i++)
        s[i].fm(s[i].get());
    M::display();
    return 0;
}