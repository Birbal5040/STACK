#include<iostream>
using namespace std;
class Stack
{
    public:
    int arr[5];
    int indx;
   Stack()
    {
        indx=-1;
    }
    void push(int val)
    {
        if(indx>=4)
        {
            cout<<"stack is full!"<<endl;
            return;
        }
        else
        {
             indx++;
            arr[indx]=val;
        }

    }
    int top()
    {   
        return arr[indx];

    }
    void pop()
    {
        indx--;
    }
    int size()
    {
        return indx+1;
    }
    void display()
    {
        for(int i=0;i<=indx;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main()
{
   Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.top()<<endl;
     st.push(50);
      cout<<st.top()<<endl;
      cout<<st.size()<<endl;
      st.push(60);
      //cout<<st.top()<<endl;
     st.display();

}