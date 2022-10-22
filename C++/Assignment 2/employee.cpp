#include <iostream>
#include <iomanip>
using namespace std;
class employee
{
    char name[50];
    int age;
    double basic=0;;
    double total=0;
    double g;
    public:
    void gross()
    {   
        g=basic+0.8*basic+0.1*basic;
        
    }

    void input()
    {   cout << "Enter your name:";
        cin >>name;
        cout << "Enter your age:";
        cin >>age;
        cout<<"Enter basic salary: ";
        cin>>basic;
        
    }

    void display()
    {   
   
        cout<<setw(9)<<name;
        cout<<setw(15)<<age;
        cout<<setw(15)<<basic;
        cout<<setw(15)<<g<<endl;
        
    }
};


int main ()
{  int n;
     cout<<"Enter no of employees: ";
        cin>>n;
        employee s[n] ;
    for(int i=0;i<n;i++){
        cout<<"Employee "<<i+1<<":"<<endl;
        s[i].input();
    }
    for(int i=0;i<n;i++){
        s[i].gross();
    }
         cout<<"Displaying details: "<<endl;
    cout<<setw(10)<<"Name: ";
    cout<<setw(15)<<"Age:";
    cout<<setw(15)<<"Basic Salary:";
    cout<<setw(15)<<"Gross Salary:"<<endl;
    for(int i=0;i<n;i++){
        s[i].display();
    }
    
    
  return 0;
}