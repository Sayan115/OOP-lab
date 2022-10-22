#include <iostream>
using namespace std;
class I
{public:
    int increment(int n)
    {
        return ++n;
    }
};
int main()
{
    I obj;
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << obj.increment(n);
    return 0;
}