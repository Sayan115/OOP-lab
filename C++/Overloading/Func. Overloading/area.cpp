#include <iostream>
using namespace std;
 void area(int a)
 {
    cout<<"Area: "<<22.0/7*a*a<<endl;
 }

 void area(int a,int b)
 {
    cout<<"Area: "<<a*b<<endl;  
 }

 void area(double a, double b)
 {
    cout<<"Area: "<<1.0/2*a*b<<endl;
 }

 int main()
 {int r, l,b;
 double h,t;
    cout<<"Enter the radius: ";
    cin>>r;
    area(r);
    cout<<"Enter the length and breadth: ";
    cin>>l;
    cin>>b;
    area(l,b);
    cout<<"Enter the height and base: ";
    cin>>h;
    cin>>t;
    area(h,t);
 }