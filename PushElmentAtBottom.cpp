#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    stack<int>gt;
    while(st.size()>0)
    {
        cout<<st.top()<<" ";
        gt.push(st.top());
        st.pop();
    }
    cout<<endl;
     st.push(100);
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