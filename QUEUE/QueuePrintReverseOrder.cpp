#include<iostream>
#include<queue>
#include<stack>
using namespace std ;
void reverse(queue<int>& q)
{   
    stack<int>st;
     while(q.size()>0)
     {
        int x=q.front();
        q.pop();
        st.push(x);
     }
     while(st.size()>0)
     {    
        int x=st.top();
        cout<<st.top()<<" ";
        st.pop();
       // q.push(x);
     }
}
int main()
{
    
   queue<int>q;
   q.push(10);
   q.push(20);
   q.push(30);
   q.push(40);
   q.push(50);
   reverse(q);
   //cout<<endl<<q.front();
}