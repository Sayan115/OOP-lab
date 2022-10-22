#include <iostream>
using namespace std;
class Employee
{
protected:
    int id, salary;
    char name[15];

public:
    void input()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "id: ";
        cin >> id;
    }
};
class Regular : public Employee
{
protected:
    int da, hra, basic;

public:
    void input1()
    {
        cout << "Basic: ";
        cin >> basic;
    }
    void cal1()
    {
        da = 40.0 / 100 * basic;
        hra = 20.0 / 100 * basic;
        salary = basic + da + hra;
        cout << "Salary of fulltime: " << salary << "\n";
    }
};
class PartTime : public Employee
{
protected:
    int hr;
    int phr;

public:
    void input2()
    {
        cout << "Enter hrs.: ";
        cin >> hr;
        cout << "Pay per hr: ";
        cin >> phr;
    }
    void cal2()
    {
        cout << hr * phr;
    }
};

int main()
{
    cout << "Enter 1 for Regular and 2 for part time: ";
    int p;
    cin >> p;
    if (p == 1)
    {
        Regular obj;
        obj.input();
        obj.input1();
        obj.cal1();
    }
    else
    {
        PartTime ob2;
        ob2.input();
        ob2.input2();
        ob2.cal2();
    }
    return 0;
}