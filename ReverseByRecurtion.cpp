#include<iostream>
#include<stack>
using namespace std;
void pushatbottom(stack<int>&st,int val)
{
    stack<int>gt;
    while(st.size()>0)
    {
        gt.push(st.top());
        st.pop();
    }
    st.push(val);
    while(gt.size()>0)
    {
        st.push(gt.top());
        gt.pop();
    }
    while(st.size()>0)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}
void reverse(stack<int>& st)
{
    if(st.size()==1) return;
    int x=st.top();
    st.pop();
    reverse(st);
    pushatbottom(st,x);

}
int main()
{   
stack<int>st;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);
//pushatbottom(st,300);
cout<<endl;
reverse(st);
   
}