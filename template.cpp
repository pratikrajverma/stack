#include<iostream>
#include<vector>
using namespace std;

template<typename U>
class stack
{
    vector<U> v;
    public:
    void push(U d)
    {
        v.push_back(d);
    }

    void pop()
    {
        v.pop_back();
    }

    U top()
    {
        return v[v.size()-1];
    }

    bool empty()
    {
        return v.empty();
    }
};
int main()
{
//enter your code

stack<char> s;
s.push('A');
s.push('B');
s.push('C');

// printind stack from top
while(!s.empty())
{
    cout<<s.top()<<endl;
    s.pop();
}

 


return 0;
}