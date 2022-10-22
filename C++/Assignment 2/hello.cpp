#include <iostream>
using namespace std;
class Name
{
    private:
    char name[20];
    public:
    void input() 
    {
        cout<<"Enter your name: ";
        gets(name);
    }
    void display()
    {
        cout<<"Hello "<<name;
    }
};

int main()
{Name n;
    n.input();
    n.display();
    
}