#include<iostream>
#include<queue>
using namespace std;
void print(queue<int>& q)
{
    for(int i=1;i<=q.size();i++)
    {
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);

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
    print(q);
    cout<<endl;
    q.pop();
    print(q);
}