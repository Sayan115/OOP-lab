
#include <iostream>
#include <iomanip>
using namespace std;
struct data
{
  char name[50];
  int roll;

};

int
main ()
{
  data p[10];
  for (int i = 0; i < 10; i++)
    {
      cout << "Enter your name:";
      cin >> (p[i].name);
      cout << "Enter your roll no:";
      cin >> p[i].roll;
    }
  for (int i = 0; i < 10; i++)
    cout << "My name is " << p[i].name << " and roll no is " << p[i].roll;
  return 0;
}
