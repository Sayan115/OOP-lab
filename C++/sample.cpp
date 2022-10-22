/*
#include <iostream>
#include <iomanip>
using namespace std;
struct Student
{
    char name[50];
    int roll;
    int m1, m2, m3, m4;
};
int total(struct Student s)
{
    return s.m1 + s.m2 + s.m3 + s.m4;
}
void percent(struct Student s)
{
    cout << (total(s) / 4.0);
}
void details(struct Student s)
{
    cout << "Name: " << s.name << endl;
}
void sdetails(struct Student s[], int n)
{
    int r = 0;
    cout << "Enter roll: ";
    cin >> r;
    for (int i = 0; i < n; i++)
    {
        if (s[i].roll == r)
        { // cout << "Name: " << s[i].name << endl;
            details(s[i]);
        }
    }
}
void pdetails(struct Student s[], int n)
{
    int p1, p2;
    cin >> p1;
    cin >> p2;
    for (int i = 0; i < n; i++)
    {
        if ((total(s[i]) / 4.0 >= p1) && (total(s[i]) / 4.0 <= p2))
            details(s[i]);
    }
}

int main()
{
    int n;
    cout << "Enter the no of students: ";
    cin >> n;
    struct Student s1[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter your name: ";
        cin >> s1[i].name;
        cout << "Enter roll no: ";
        cin >> s1[i].roll;
        cout << "Enter marks 1:";
        cin >> s1[i].m1;
        cout << "Enter marks 2:";
        cin >> s1[i].m2;
        cout << "Enter marks 3:";
        cin >> s1[i].m3;
        cout << "Enter marks 4:";
        cin >> s1[i].m4;
        // total(s1[i]);
        // percent(s1[i]);
    }
    struct Student *e;
    for (int i = 0; i < n; i++)
    {
        e = &s1[i];
        cout << setw(5) << "Name: " << e->name << endl;
        cout << setw(5) << "Roll no: " << e->roll << endl;
    }
    // sdetails(s1, n);
    // pdetails(s1, n);
    return 0;
}
*/
/*
#include <iostream>
#include <iomanip>
#include <string.h>
#include <cstring>
using namespace std;
class Hello
{
private:
    string ch;
    int n;

public:
    Hello()
    {
        cout << "Non para called\n";
        ch = "";
        n = 0;
    }

    Hello(string c , int p = 5)
    {
        ch = c;
        n = p;
        for (int i = 0; i < n; i++)
            cout << setw(8) << ch << endl;
    }

    ~Hello()
    {
        cout << "Destructor called\n";
    }
};
int main()
{
    Hello();
    Hello ob1("Sayan", 2);
}*/