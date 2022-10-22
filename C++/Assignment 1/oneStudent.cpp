#include <iostream>
#include <iomanip>
using namespace std;
struct student
{
    char name[50];
    int roll;
    int marks_1,marks_2,marks_3,marks_4,marks_5;
};

int main ()
{   student s;
    cout << "Enter your name:";
    cin >> s.name;
    cout << "Enter your roll no:";
    cin >> s.roll;
    cout<<"Enter marks for subject 1:";
    cin>>s.marks_1;
    cout<<"Enter marks for subject 2:";
    cin>>s.marks_2;
    cout<<"Enter marks for subject 3:";
    cin>>s.marks_3;
    cout<<"Enter marks for subject 4:";
    cin>>s.marks_4;
    cout<<"Enter marks for subject 5:";
    cin>>s.marks_5;

    cout<<"Name: " << s.name<<"\nRoll no: "<<s.roll<<endl;
    cout << "Marks:\n" << s.marks_1<<setw(5)<<s.marks_2<<setw(5)<<s.marks_3<<setw(5)<<s.marks_4<<setw(5)<<s.marks_5;
  return 0;
}