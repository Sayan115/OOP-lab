#include <iostream>
using namespace std;
#include <fstream>
int main()
{
    ifstream in("File.txt");
    char *p;
    in >> p;
    cout << p;
    in.close();
    return 0;
}