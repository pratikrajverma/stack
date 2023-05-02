#include<iostream>
#include"makeownheaderfile.h"
int main()
{
//enter your code
stack<int>s;
int size;
cin>>size;
while(size--)
{
    int d;
    cin>>d;
    s.push(d);
}

while(s.size())
{
    cout<<s.top()<<endl;
    s.pop();

}



return 0;
}