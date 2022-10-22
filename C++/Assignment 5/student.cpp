#include <iostream>
#include <iomanip>
using namespace std;
class Student
{
protected:
    char name[15];
    int roll;
    int age;

public:
    void details()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll no: ";
        cin >> roll;
        cout << "Enter age: ";
        cin >> age;
    }
};
class Test : public Student
{
protected:
    int m[5];

public:
    void marks()
    {
        cout << "Enter marks: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> m[i];
        }
    }
    void display()
    {
        cout << "Details: \n"
             << name << "\t" << roll << "\t" << age << "\n";
        cout << "Marks:\n";
        for (int i = 0; i < 5; i++)
            cout << setw(5) << m[i];
    }
};
class Sports
{
protected:
    int sm;

public:
    void i()
    {
        cout << "Enter marks in sports: ";
        cin >> sm;
    }
    void di()
    {
        cout << setw(5) << sm << "\n";
    }
};
class Result : public Test, public Sports
{
public:
    void t()
    {
        int s = 0;
        for (int i = 0; i < 5; i++)
            s = s + m[i] + sm;
        cout << "Total: " << s << "\n";
        cout << "Percent: " << s / 600.0 * 100.0 << "\n";
    }
    bool ip(int ri)
    {
        return (roll == ri);
    }
};
int main()
{
    Result obj[2];
    for (int i = 0; i < 2; i++)
    {
        obj[i].details();
        obj[i].marks();
        obj[i].i();
        obj[i].display();
        obj[i].di();
    }
    int ri;
    cout << "Enter roll: ";
    cin >> ri;
    for (int i = 0; i < 2; i++)
    {
        if (obj[i].ip(ri))
            obj[i].t();
    }
}