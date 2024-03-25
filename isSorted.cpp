#include<iostream>
#include<stack>
#include<queue>

using namespace std;

void printQ(queue<int> q)
{
    while(!q.empty())
    {
    cout<<q.front()<<endl;
    q.pop();
    }
}
void printSt(stack<int> q)
{
    while(!q.empty())
    {
    cout<<q.top()<<endl;
    q.pop();
    }
}

bool isSorted(stack<int> st)
{
    if(st.empty()){return true;}
    int x = st.top();
    while(!st.empty())
    {
        if(x>st.top()){return false;}
        x = st.top();
        st.pop();
    }
    return true;
}

// CodeStepByStep Solution:
// bool isSorted(Stack<int> st)
// {
//     if(st.isEmpty()){return true;}
//     int x = st.peek();st.pop();
//     while(!st.isEmpty())
//     {
//         if(x>st.peek()){return false;}
//         x = st.top();
//         st.pop();
//     }
//     return true;
// }

int main()
{
    stack<int> q;
    q.push(2);
    q.push(3);
    q.push(8);
    q.push(8);
    q.push(15);
    q.push(11);
    q.push(20);
    q.push(20);
    
    cout<<isSorted(q);
    // printSt(q);
    return 0;
}