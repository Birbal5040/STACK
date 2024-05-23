#include<iostream>
using namespace std;
class node  //user define data type
{   
    public:
   int val;
   node*next;
   node(int val)
   {
    this->val=val;
    this->next=NULL;
   }
};
class stack
{
  public:
  node*head;
  int size;
  stack()
  {
    head=NULL;
    size=0;
  }
  void push(int val)
  {
    node*temp=new node(val);
    temp->next=head;
    head=temp;
    size++;
  }
  void pop()
  {
    if(head==NULL)
    {
        cout<<"Stack is Empty"<<endl;
        return;
    }
    head=head->next;
    size--;
  }
  int top()
  {
    if(head==NULL)
    {
        cout<<"Stack is Empty"<<endl;
       
    }
     return head->val;
  }
  void print(node*temp)
  {
    if(temp==NULL) return;
   print(temp->next);
    cout<<temp->val<<" ";
  }
  void display()
  {
    node*temp=head;
    print(temp);
    cout<<endl;
  }
  void dis()
  {
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
  }
  
};
int main()
{
   stack st;
   // cout<<st.top();
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    // cout<<st.size<<endl;
    // cout<<st.top()<<endl;
    // st.display();
    // cout<<endl;
    st.dis();
}