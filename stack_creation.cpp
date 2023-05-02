#include<iostream>
#include<vector>
using namespace std;
class stack
{
    vector<int> v;
    public:
    // push operation
    void push(int d)
    {
        v.push_back(d);
    }

    // pop operation
    void pop()
    {
        v.pop_back();
    }

    //top operation

    int top()
    {
        return v[v.size()-1];
    }

    //size operation
    int size()
    {
        return v.size();
    }

    //empty operation
    bool empty()
    {
        return v.empty();
    }
};


int main()
{
//enter your code
stack s;
s.push(2);
s.push(4);
s.push(5);
s.push(7);


// printind stack from top
while(!s.empty())
{
    cout<<s.top()<<endl;
    s.pop();
}







return 0;
}