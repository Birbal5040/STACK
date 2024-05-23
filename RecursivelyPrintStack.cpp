#include<iostream>
# include<stack>
using namespace std;
void recursively(stack<int>& st)
{
    if(st.size()==0) return;
     cout<<st.top()<<" ";
     int x=st.top();
     st.pop();
    recursively(st);
     st.push(x);
    // cout<<st.top()<<" ";
     
     
}
int main()
{
    stack<int>st;
   // cout<<st.top()<<endl;//---this is shiw UNDERFLOW
    //cout<<st.pop()<<endl; //---this is shiw UNDERFLOW
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    recursively(st);
}
