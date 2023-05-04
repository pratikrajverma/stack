#include<iostream>
#include<stack>
using namespace std;

void insertatbottom(stack<int>&s, int ele)
{
    //base case
    if(s.size()==0)
    {
        s.push(ele);
        return;
    }
    // rec case
    int t=s.top();
    s.pop();
    insertatbottom(s,ele);
    s.push(t);
}


void reverse(stack<int>&s)
{
    //base case
    if(s.size()==0)
    {
        return;
    }
    //rec case
    int ele=s.top();
    s.pop();
    reverse(s);
    insertatbottom(s,ele);
}



int main()
{
//enter your code
stack<int> s;
int size;
cin>>size;
while(size--)
{
    int d;
    cin>>d;
    s.push(d);
}



reverse(s);

while(s.size())
{
    cout<<s.top()<<endl;
    s.pop();
}





return 0;
}