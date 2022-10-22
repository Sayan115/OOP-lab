#include <iostream>
using namespace std;

class interest
{
private:
    float p;
    float r;
    float t;
    float si;
    float amount;

public:
    void input()
    {
        cout << " Enter principle Amount : ";
        cin >> p;
        cout << "Enter Rate of Interest : ";
        cin >> r;
        cout << "Enter no of years : ";
        cin >> t;
    }

    void simple()
    {
        si=p*(1+(r/100)*t);
        cout << "\nSimple Interest : " << si;
    }
};

int main()
{
    interest i;

    i.input();
    i.simple();

    return 0;
}
