//WAP to find pow of any number. hint pow(2,3)=8
#include <iostream>

using namespace std;
int pow(int n,int p);
int main()
{int n,p;
    cout<<"Enter the number and power:";
    cin>>n>>p;
    cout<<"Result: "<<pow(n,p);
    return 0;
}

int pow(int n,int p)
{if(p>0)
    return n*pow(n,p-1);
    else
    return 1;
}