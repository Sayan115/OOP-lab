//WAP to input a string and display in reverse side
#include <iostream>

using namespace std;

int main()
{string st,t;
    cout<<"Enter string:";
    cin>>st;
    for(int i=st.length()-1;i>=0;i--)
        t=t+st[i];
    cout<<"Reversed:"<<t;
    return 0;
}