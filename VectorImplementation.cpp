#include<iostream>
#include<vector>
using namespace std;
class tack
{
    public:
   vector<int>v; //No overflow condition
    void push(int val)
    {
       v.push_back(val); 

    }
    int top()
    {   
        if(v.size()==-1)
        {
            cout<<"Stack is Empty!"<<endl;
          
        }
        return v[v.size()-1];

    }
    // void pop()
    // {
    //     v.size()= v.size()-1;
    // }
    int size()
    {
        return v.size();
    }
    void display()
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

};
int main()
{
   tack st;
   //cout<<st.top();
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    // cout<<st.top()<<endl;
    //   st.push(50);
    //    cout<<st.top()<<endl;
    //   cout<<st.size()<<endl;
    //   st.push(60);
    // cout<<st.top()<<endl;
    //  st.display();
   //cout<<st.pop()<<endl;
    cout<<st.top();

}