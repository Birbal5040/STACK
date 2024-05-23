#include<iostream>
#include<stack>
using namespace std;
void dis(stack<int>& st)
{
    if(st.size()==0) return;
    //int x=st.top();
    cout<<st.top()<<" ";
    st.pop();
    dis(st);
    //st.push(x);
}
int main()
{
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    dis(st);
}