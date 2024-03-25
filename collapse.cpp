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

void collapse(stack<int> &st)
{
    if(st.empty()){return;}
    stack<int> st1;
    if(st.size()%2!=0){st1.push(st.top());st.pop();}
    while(!st.empty())
    {
        int sumpair=0;
        for(int i=0;i<2;i++)
        {
            sumpair=sumpair+st.top();
            if(i==1){st1.push(sumpair);}
            st.pop();
        }
    }
    while(!st1.empty()){st.push(st1.top());st1.pop();}
}
// CodeStepByStep Solution:
// void collapse(Stack<int> &st)
// {
//     if(st.isEmpty()){return;}
//     Stack<int> st1;
//     if(st.size()%2!=0){st1.push(st.pop());}
//     while(!st.isEmpty())
//     {
//         int sumpair=0;
//         for(int i=0;i<2;i++)
//         {
//             sumpair=sumpair+st.pop();
//             if(i==1){st1.push(sumpair);}
//         }
//     }
//     while(!st1.isEmpty()){st.push(st1.pop());}
// }

int main()
{
    stack<int> q;
    q.push(3);
    q.push(8);
    q.push(17);
    q.push(9);
    // q.push(9);
    q.push(17);
    // q.push(8);
    // q.push(3);
    
    collapse(q);
    printSt(q);
    return 0;
}