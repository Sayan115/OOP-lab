#include <iostream>
using namespace std;
class Employee
{
protected:
    int id, salary;
    char name[15];

public:
    virtual void input()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "id: ";
        cin >> id;
    }
    virtual void cal()
    {
        salary = 0;
    }
};
class Regular : public Employee
{                                            
protected:
    int da, hra, basic;

public:
    void input()
    {
        cout << "Basic: ";
        cin >> basic;
    }
    void cal()
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
    void input()
    {
        cout << "Enter hrs.: ";
        cin >> hr;
        cout << "Pay per hr: ";
        cin >> phr;
    }
    void cal()
    {
        cout << hr * phr;
    }
};

int main()
{
    cout << "Enter 1 for Regular and 2 for part time: ";
    int p;
    cin >> p;
    Employee *e;
    Employee o1;
    e = &o1;
    e->input();

    if (p == 1)
    {
        Regular obj;
        e = &obj;
        e->input();
        e->cal();
    }
    else
    {
        PartTime ob2;
        e = &ob2;
        e->input();
        e->cal();
    }
    return 0;
}