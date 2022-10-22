#include<iostream>
using namespace std;
class student{
    private:
    char name[30];
    int roll_no;
    int total;
    public:
      void get();
      void print();
};
void student::get(){
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter roll no:";
    cin>>roll_no;
    cout<<"Enter total marks:";
    cin>>total;
}
void student::print(){
    
    cout<<"Name:"<<name<<endl;
    cout<<"Roll no:"<<roll_no<<endl;
    cout<<"Total="<<total<<endl;
}
int main(){
    
    int n,i;
    cout<<"Enter total students:";
    cin>>n;
    student s[n];
    for(i=0;i<n;i++){
        cout<<"details "<<i+1<<":"<<endl;
        s[i].get();
    }
    cout<<"Printing student details:\n";
    for(i=0;i<n;i++){
        cout<<"details"<<i+1<<":"<<endl;
        s[i].print();
    }
    return 0;
}