#include<iostream>
#include<stack>
using namespace std;
void recursively(stack<int>&st)
{
    if(st.size()==0)
    {
        st.push(650);
        return ;
    }
    cout<<st.top()<<" ";
    int x=st.top();
    st.pop();
    recursively(st);
    st.push(x);
}
int main()
{
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    recursively(st);
}