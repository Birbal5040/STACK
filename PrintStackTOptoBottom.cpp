#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>st;
    st.push(10);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    cout<<st.size()<<endl;
    while(st.size()>0)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
}