#include <iostream>

using namespace std;
class complex{
    int real;
    int imaginary;
    public:
    void input(){
        cout<<"Enter real part of complex number: ";
        cin>>real;
        cout<<"Enter imaginary part of complex number: ";
        cin>>imaginary;
    }
    void showNumber(){
        if(imaginary<0){
        cout<<real<<imaginary<<"i"<<endl;
        }
        else{
            cout<<real<<"+"<<imaginary<<"i"<<endl;
        }
    }
};

int main()
{
   complex c[10];

   for(int i=0;i<10;i++){
    c[i].input();
   }
    for(int i=0;i<10;i++){
        c[i].showNumber();
    }
    
    return 0;
}