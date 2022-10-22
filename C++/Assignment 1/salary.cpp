#include <iostream>
#include <iomanip>
using namespace std;
struct employee
{
    char name[50];
    int age;
    double basic = 0;
    double total = 0;
    double g;
};
void gross(struct employee s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        s[i].g = s[i].basic + 0.8 * s[i].basic + 0.1 * s[i].basic;
    }
}

int main()
{
    int n;
    cout << "Enter no of employees: ";
    cin >> n;
    struct employee s[n], *e;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter your name:";
        cin >> s[i].name;
        cout << "Enter your age:";
        cin >> s[i].age;
        cout << "Enter basic salary: ";
        cin >> s[i].basic;
        gross(s, n);
    }
    cout << "Displaying details: " << endl;
    cout << setw(10) << "Name: ";
    cout << setw(15) << "Age:";
    cout << setw(15) << "Basic Salary:";
    cout << setw(15) << "Gross Salary:" << endl;
    for (int i = 0; i < n; i++)
    {
        e = &s[i];
        cout << setw(9) << e->name;
        cout << setw(15) << e->age;
        cout << setw(15) << e->basic;
        cout << setw(15) << e->g << endl;
    }

    return 0;
}