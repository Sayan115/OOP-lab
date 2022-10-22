#include <iostream>
using namespace std;
class str
{
    string s;

public:
    str(string t = "")
    {
        string *a = new string;
        *a = t;
        s = *a;
    }

    str operator+(str t)
    {
        str temp;
        (temp.s) = s + t.s;
        return temp;
    }
    void display()
    {
        cout << s << endl;
    }
};

int main()
{
    str s("Tree "), t("Fruit");
    str c = s + t;
    s.display();
    t.display();
    c.display();
}