#include <iostream>
using namespace std;
class Num
{public:
    inline int square(int n)
    {
        return n*n;
    }
    inline int cube(int n)
    {
        return n*n*n;
    }
};
int main()
{
    Num obj;
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << obj.square(n)<<"  "<<obj.cube(n);
    return 0;
}