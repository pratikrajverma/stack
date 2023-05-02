#include<iostream>
#include<stack>
using namespace std;
int main()
{
//enter your code
stack<int> s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);

while(!s.empty())
{
    cout<<s.top()<<endl;
    s.pop();
}

cout<<s.size();



return 0;
}