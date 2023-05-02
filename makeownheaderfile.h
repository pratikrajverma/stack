
using namespace std;
#include<vector>
template<typename U>

class stack
{
    vector <U> v;
    public:
    void push(int d)
    {
        v.push_back(d);
    }

    void pop()
    {
        v.pop_back();
    }

    int size()
    {
        return v.size();
    }

    int top()
    {
        return v[v.size()-1];
    }

    bool empty()
    {
        return v.empty();
    }
};

