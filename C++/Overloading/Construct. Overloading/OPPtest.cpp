#include <iostream>
using namespace std;
class Customer
{
    string name;
    int id;
    int account;
    double b;
    string emailAddress;

public:
    Customer()
    {
        name = "";
        id = 0;
        account = 0;
        b = 0.0;
        emailAddress = "";
    }
    Customer(string n, int i, int a, int b1, string e)
    {
        name = n;
        id = i;
        account = a;
        b = b1;
        emailAddress = e;
    }
    Customer(Customer &c)
    {
        name = c.name;
        id = c.id;
        account = c.account;
        b = c.b;
        emailAddress = c.emailAddress;
    }
    double getBalance()
    {
        return b;
    }
    bool withdraw(double amount)
    {
        if (amount < b)
            return true;
        else
            return false;
    }
    void display()
    {
        cout << name;
    }
};
void check(Customer c1, Customer c2)
{
    if (c1.getBalance() > c2.getBalance())
        c1.display();
    else
        c2.display();
}

int main()
{
    Customer();
    Customer c1("Ankit", 24573921, 234759, 21890000, "jg123@gmail.com");
    Customer c2("Rohan", 75577541, 312000, 25610000, "rt3499@gmail.com");
    Customer c3(c1);
    Customer c4(c2);
    check(c3, c4);
}
