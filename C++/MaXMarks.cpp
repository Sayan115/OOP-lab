#include<iostream>
using namespace std;
class Students
{
    private:
    int marks;
    public:
    input() 
    {cout<<"Enter marks: ";
        cin>>marks;
    }

    get() 
    {
        return marks;
    }
};
    int main()
    {
        int n,max=0;
        cout<<"Enter the number of students: ";
        cin>>n;
        Students s[n];
        for(int i=0;i<n;i++)
            s[i].input();
        for(int i=0;i<n;i++)
       if(s[i].get()>max)
        max=s[i].get();
        cout<<"Max: "<<max; 
    }