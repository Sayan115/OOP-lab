#include <iostream>
using namespace std;
class account
{
protected:
    int no, bal;
    char name[15];

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
};
class savings : public account
{
protected:
    int min;

public:
    void deposit1()
    {
        int d;
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
        if (min - a != -1)
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
    void deposit2()
    {
        int d;
        cout << "Enter amt: ";
        cin >> d;
        bal += d;
    
    }
    void withdraw2()
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
    void display2()
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
        obj.input();
        obj.deposit1();
        obj.withdraw1();
        obj.display1();
    }
    else
    {
        current ob2;
        ob2.input();
        ob2.deposit2();
        ob2.withdraw2();
        ob2.display2();
    }
    return 0;
}