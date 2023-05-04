#include<iostream>
#include<stack>
using namespace std;

void insertatbottom(stack<int>&s, int ele)
{
    //base case
    if(s.size()==0)
    {
        cout<<ele<<endl;
        return;
    }
    // rec case
    int t=s.top();
    s.pop();
    insertatbottom(s,ele);
    cout<<t;
}


void reverse_print(stack<int>&s)
{
    //base case
    if(s.size()==0)
    {
        return;
    }
    //rec case
    int ele=s.top();
    s.pop();
    reverse_print(s);
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



reverse_print(s);









return 0;
}