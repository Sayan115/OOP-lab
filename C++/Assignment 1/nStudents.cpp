#include <iostream>
#include <iomanip>
using namespace std;
struct student
{
    char name[50];
    int roll;
    int marks[5];
    int total=0;
    double per;
};
void percent(struct student s[],int n)
{   for(int i = 0; i<n;i++){
    for(int j=0;j<5;j++)
    {
        s[i].total+=s[i].marks[j];
    }
    s[i].per=s[i].total*100/500;
    }
}

void sort(struct student s[],int n)
{ 
    for(int i=0;i<n;i++)
    {for(int k=0;k<5;k++)
        {
        for(int j=0;j<5;j++)
            {if(s[i].marks[j]>s[i].marks[j+1])
                {int t=s[i].marks[j];
                    s[i].marks[j]=s[i].marks[j+1];
                    s[i].marks[j+1]=t;
                }
            }
        }
    }
    cout<<"Sorting: "<<endl;
    for(int i=0;i<n;i++)
    {cout<<"Name: "<<s[i].name<<endl;
        for(int j=0;j<5;j++)
            cout<<s[i].marks[j]<<setw(5);
     cout<<endl;  
    }
}

void details(struct student s[],int n)
{   
    int p;
    cout<<"Enter roll no: ";
    cin>>p; 
    cout<<"Displaying details: "<<endl;
    for(int i=0;i<n;i++)
    {if(s[i].roll==p)
    {
        cout<<"Name: "<<s[i].name<<endl;
        cout<<"Total:"<<s[i].total<<endl;
        cout<<"Percentage:"<<s[i].per<<endl;
    } 
    }
}

void detailsRange(struct student s[],int n)
{
    int l,u;
    cout<<"Enter lower limit: ";
    cin>>l;
    cout<<"Enter upper limit: ";
    cin>>u;
    for(int i=0;i<n;i++)
    {if(s[i].per>=l&&s[i].per<=u)
        {
        cout<<"Name: "<<s[i].name<<endl;
        cout<<"Roll no:"<<s[i].roll<<endl;
        cout<<"Percentage:"<<s[i].per<<endl;
    } 
    }
}
int main ()
{   int n;
    cout<<"Enter no of students: ";
    cin>>n;
    student s[n];
    for(int i = 0; i <n;i++)
    {cout << "Enter your name:";
    cin >> s[i].name;
    cout << "Enter your roll no:";
    cin >> s[i].roll;
    cout<<"Enter marks: "<<endl;
    for(int j=0;j<5;j++)
    {
        cin>>s[i].marks[j];
        
    }
    }
    percent(s,n);
    details(s,n);
    detailsRange(s,n);
    sort(s,n);
    

  return 0;
}