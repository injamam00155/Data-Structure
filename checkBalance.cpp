#include<iostream>
#include<stack>
#include<queue>
#include<string>

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

int checkBalance(string str)
{
    stack<int> b;
    stack<int> p;
    int c = 0;
    for(int i=0;i<str.size();i++)
    {
        if ((p.size()<b.size())&&c==0){return i-1;}
        else if (str[i]=='('){p.push(i);}
        else if (str[i]=='{')
        {
            if(p.size()!=0){c++;}
            b.push(i);
        }
        else if (str[i]==')')
        {
            if (p.empty()){return i;}
            p.pop();
            c--;
        }
        else if (str[i]=='}')
        {
            if (b.empty()){return i;}
            b.pop();
        }
    }
    if (b.empty()&&p.empty()){return -1;}
    // else if ((!b.empty())&&(!p.empty()))
    // {
    //     if (p.top()<b.top()){return p.top();}
    //     else{return b.top();}
    // }
    // else if (!b.empty()){return b.top();}
    // return p.top();
    return str.size();
}

// //CodeStepByStep Solutions:

// int checkBalance(string str)
// {
//     Stack<int> b;
//     Stack<int> p;
//     int c=0;
//     for(int i=0;i<str.size();i++)
//     {
//         if ((p.size()<b.size())&&c==0){return i-1;}
//         else if (str[i]=='('){p.push(i);}
//         else if (str[i]=='{')
//         {
//             if(p.size()!=0){c++;}
//             b.push(i);
//         }
//         else if (str[i]==')')
//         {
//             if (p.isEmpty()){return i;}
//             p.pop();
//             c--;
//         }
//         else if (str[i]=='}')
//         {
//             if (b.isEmpty()){return i;}
//             b.pop();
//         }
//     }
//     if (b.isEmpty()&&p.isEmpty()){return -1;}
//     return str.size();
// }

int main()
{
    
    cout<<checkBalance("if (a(4) > 9) { foo(a(2)); }")<<endl;
    cout<<checkBalance("({)}")  ;
    return 0;
}