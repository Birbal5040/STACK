#include<iostream>
using namespace std;
class node  //user define data type
{    public:
    int val;
    node*next;
    node(int val)
    {
        this->val=val;
        this->next=NULL;

    }
};
class linkedlist  //user define data structure
{
  public:
  node*head;
  node*tail;
  int size;
  linkedlist()
  {
    head=tail=NULL;
    size=0;
  }
  void insertattail(int val)
  {
    node*temp=new node(val);
    if(size==0) head=tail=temp;
    else
    {
        tail->next=temp;
        tail=temp;
    }
    size++;
  }
  void insertathead(int val)
  {
    node*temp=new node(val);
    if(size==0) head=tail=temp;
    else
    {
        temp->next=head;
        head=temp;
    }
    size++;
  }
  void insertatindex(int val,int ind)
  {   
    if(ind>size || ind<0) 
    {
        cout<<" your Invalid indx"<<endl;
        
    }
   else if(ind==0) insertathead(val);
   else if(ind==size) insertattail(val);
   else
   {
    node*temp=head;
    node*t=new node(val);
    for(int i=0;i<ind-1;i++)
    {
        temp=temp->next;
    }
    t->next=temp->next;
    temp->next=t;

   }
   size++;
  }
  int getind(int ind)
  {
    node*temp=head;
    if(ind<0 || ind>size)
    {
        cout<<"your indx invalid"<<endl;
        
    }
    else if(ind==0) return head->val;
    else if(ind==size-1) return tail->val;
    else
    
    for(int i=1;i<=ind;i++)
    {
        temp=temp->next;
    }
    return temp->val;
  }
  void display()
  {
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
  }
};
int main()
{
    linkedlist ll;
    ll.insertattail(10);
    ll.insertattail(20);
    ll.insertattail(30);
    ll.insertattail(40);
    ll.insertathead(100);
    ll.display();
    
}