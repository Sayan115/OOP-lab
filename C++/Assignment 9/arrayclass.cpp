#include <iostream>
using namespace std;

template <typename T>
class A
{
    T arr[5];

public:
    void input()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }
    }
    void sort()
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = i + 1; j < 5; j++)
            {
                if (arr[i] > arr[j])
                {
                    T temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    void output()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    A<int> arr;
    A<float> arr2;
    arr.input();
    arr.sort();
    arr.output();

    printf("\n");
    arr2.input();
    arr2.sort();
    arr2.output();
}