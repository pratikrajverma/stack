#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*next;
    node(int d)
    {
        data=d;
        next=NULL;

    }
};

class stack
{
    node*head;
    int l;
    public:
    stack()
    {
        head=NULL;
        l=0;
    }

    //push operation
    void push(int d)
    {
        if(head==NULL)
        {
            node*p=new node(d);
            head=p;
            l++;
        }else{
        node*p=new node(d);
        p->next=head;
        head=p;
        l++;
        }
        

    }

    //pop operation
    void pop()
    {
        if(head==NULL)
        {
            return ;
        }else if(head->next==NULL)
        {
            delete head;
            head=NULL;

        }else
        {
            node*temp;
            temp=head->next;
            delete head;
            head=temp;

        }
        l--;
    }

    //top operation
    int top()
    {
        return head->data;
    }

    //length operation
    int length()
    {
        return l;
    }

    //check ll is empty or not
    bool empty()
    {
        return head==NULL;
    }
 
};

int main()
{
//enter your code

stack s;
s.push(6);
s.push(1);
s.push(3);
s.push(2);
s.push(9);

while(s.length())
{
    cout<<s.top()<<endl;
    s.pop();

}
cout<<s.length();
cout<<endl;
cout<<s.empty();




return 0;
}