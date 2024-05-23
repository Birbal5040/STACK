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
    cout<<"size of stack--->"<<st.size()<<endl;
    stack<int>gt;
    cout<<"first stack -->"<<endl;
    while(st.size()>0)
    {
        cout<<st.top()<<" ";
        gt.push(st.top());
        st.pop();

    }
    cout<<endl<<"second stack bottom to top element-->"<<endl;
    while(gt.size()>0)
    {
        cout<<gt.top()<<" ";
        gt.pop();
    }
      
}

