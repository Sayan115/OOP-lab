#include <iostream>
using namespace std;

class Rectangle{
    private:
    int length,breadth,area;
    public:
    void input();
    void fArea();
    
};

void Rectangle::fArea()
    {
    area= length * breadth;
    }

void Rectangle::input()
    {
    cout<<"Enter length and breadth: "<<endl;
    cin>>length>>breadth;
    fArea();
    cout<<"Area: "<<area;
    }

int main()
{ Rectangle r;
    r.input();
    return 0;
}