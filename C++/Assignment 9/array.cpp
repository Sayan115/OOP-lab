#include <iostream>
using namespace std;

template <typename T>
void input(T a[], int n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

template <typename T>
void display(T a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
}

template <typename T>
void sort(T a[], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
            {
                T t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    input<int>(a, n);
    sort<int>(a, n);
    display<int>(a, n);
    float b[n];
    input<float>(b, n);
    sort<float>(b, n);
    display<float>(b, n);
    return 0;
}