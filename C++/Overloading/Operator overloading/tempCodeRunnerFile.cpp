#include <iostream>
#include <string>
using namespace std;
class Student
{
    string name;
    int age;

public:
    Student(string n, int a)
    {
        name = n;
        age = a;
    }
    void display()
    {
        cout << name << age;
    }
    void *operator new(size_t size)
    {
        void *p ::operator new(size);
        return p;
    }
    void operator delete(void *p)
    {
        free(p);
    }
};
int main()
{
    Student *p = new Student("Sayan", 19);
    p->display();
    delete p;
    return 0;
}