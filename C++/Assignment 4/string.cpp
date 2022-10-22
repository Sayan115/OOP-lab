#include <iostream>
using namespace std;
class Concat
{
private:
    string str;
    int a;

public:
    Concat()
    {
        str = "";
        a = 0;
    }
    Concat(string s)
    {
        str = s;
        a = s.length();
    }
    Concat(Concat &obj)
    {
        str = obj.str;
        a = obj.a;
    }
    ~Concat()
    {
        cout << "Destructor called\n";
    }
    void add(Concat &o)
    {
        string s;
        s = str + o.str;

        cout << s << endl;
    }
};
int main()
{
    string s1, s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;
    Concat();
    Concat obj1(s1);
    Concat obj2(s2);
    Concat obj3(obj1);
    Concat obj4(obj2);

    obj3.add(obj4);
}
