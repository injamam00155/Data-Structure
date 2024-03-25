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

bool isPalindrome(queue<int> q)
{
    if(q.empty()){return true;}
    queue<int> q1;
    stack<int> st;
    int size=q.size();
    int count=(size)/2;
    while(count--)
    {
        st.push(q.front());q.pop();
    }
    if(size%2!=0){q.pop();}
    while(!st.empty())
    {
        q1.push(st.top());
        st.pop();
    }
    if(q==q1){return true;}
    return false;
}

// CodeStepByStep Solution
// bool isPalindrome(Queue<int> q)
// {
//     if(q.isEmpty()){return true;}
//     Queue<int> q1;
//     Stack<int> st;
//     int size=q.size();
//     int count=(size)/2;
//     while(count--){st.push(q.dequeue());}
//     if(size%2!=0){q.dequeue();}
//     while(!st.isEmpty()){q1.enqueue(st.pop());}
//     if(q==q1){return true;}
//     return false;
// }

int main()
{
    queue<int> q;
    q.push(3);
    q.push(8);
    q.push(17);
    q.push(9);
    // q.push(9);
    q.push(17);
    q.push(8);
    q.push(3);
    
    cout<<isPalindrome(q);
    // printSt(q);
    return 0;
}