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

void flipHalf(queue<int> &q)
{
    if(q.empty()){return;}
    queue<int> q1;
    stack<int> st;
    
    while(!q.empty())
    {
        q1.push(q.front());
        q.pop();
        if(q.empty()){break;}
        st.push(q.front());
        q.pop();
    }

    while(!q1.empty()||!st.empty())
    {
        if(q1.empty()){return;}
        q.push(q1.front());
        q1.pop();
        if(st.empty()){return;}
        q.push(st.top());
        st.pop();
    }
}

// //CodeStepByStep Solution:
// void flipHalf(Queue<int> &q)
// {
//     if(q.empty()){return;}
//     Queue<int> q1;
//     Stack<int> st;
    
//     while(!q.empty())
//     {
//         q1.enqueue(q.dequeue());
//         if(q.empty()){break;}
//         st.push(q.dequeue());
//     }

//     while(!q1.empty()||!st.empty())
//     {
//         if(q1.empty()){return;}
//         q.enqueue(q1.dequeue());
//         if(st.empty()){return;}
//         q.enqueue(st.pop());
//     }
// }


int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    
    flipHalf(q);
    printQ(q);
    return 0;
}