#include<iostream>
#include<queue>
//#include<stack>
using namespace std;
void display(queue<int>& q)
{
    while(q.size()>0)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}
void evenposition(queue<int>& q)
{
    for(int i=0;i<q.size();i++)
    {
        if(i%2==0) q.pop();
       else
       {
        int x=q.front();
        q.pop();
        q.push(x);

       }
       
        
           
    }
    display(q);
}
int main()
{
    queue<int>q;
    q.push(10);//0
    q.push(20);//1
    q.push(30);//2
    q.push(40);//3
    q.push(50);//4
    evenposition(q);
    cout<<endl;
    //display(q);
}