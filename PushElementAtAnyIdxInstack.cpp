#include<iostream>
#include<stack>
using namespace std;
void push(stack<int>& st,int indx,int val)
{    
   
    stack<int>gt;
    while(st.size()>indx)
    {
        cout<<st.top()<<" ";
        gt.push(st.top());
        st.pop();
    }
    cout<<endl;
    st.push(val);
    while(gt.size()>0)
    {
        st.push(gt.top());
        gt.pop();

    }
    cout<<endl;
    while(st.size()>0)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main()
{
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
     push(st,4,150);
}
