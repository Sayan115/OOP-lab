#include <iostream>
using namespace std;
class account
{
protected:
    int no, bal;
    char name[15];

public:
    virtual void input()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Account no: ";
        cin >> no;
        cout << "Balance :";
        cin >> bal;
    }
    virtual void deposit1()
    {
        bal = 0;
    }
    virtual void withdraw1()
    {
        bal = 0;
    }
    void display1()
    {
        cout << "Balance: " << bal;
    }
};
class savings : public account
{
protected:
    int min;

public:
    void input()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Account no: ";
        cin >> no;
        cout << "Balance :";
        cin >> bal;
    }
    void deposit1()
    {
        int d = 0;
        cout << "Enter amt: ";
        cin >> d;
        bal += d;
        min = bal;
    }

    void withdraw1()
    {
        int a;
        cout << "Withdraw amt: ";
        cin >> a;
        if (min - a > 0)
        {
            min = min - a;
            bal = bal - a;
        }
    }
    void display1()
    {
        cout << "Balance: " << bal;
    }
};
class current : public account
{
protected:
    int od;

public:
    void input()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Account no: ";
        cin >> no;
        cout << "Balance :";
        cin >> bal;
    }
    void deposit1()
    {
        int d;
        cout << "Enter amt: ";
        cin >> d;
        bal += d;
    }
    void withdraw1()
    {
        int a;
        cout << "Withdraw amt: ";
        cin >> a;
        if (od - a != -1)
        {
            od = od - a;
            bal = bal - a;
        }
    }
    void display1()
    {
        cout << "Balance: " << bal;
    }
};

int main()
{
    int c = -1;
    cout << "Enter choice: \n1 for savings\n2 for current.\n";
    cin >> c;
    if (c == 1)
    {
        savings obj;
        account *p;
        p = &obj;
        p->input();
        p->deposit1();
        p->withdraw1();
        p->display1();
    }
    else
    {
        current ob2;
        account *p;
        p = &ob2;
        p->input();
        p->deposit1();
        p->withdraw1();
        p->display1();
    }
    return 0;
}