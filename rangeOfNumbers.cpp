#include<iostream>
#include<cmath>
using namespace std;

void rangeOfNumbers(int a, int b) 
{   
    if(a<=b)
    {
    for(int i=a;i<=b;++i)
        {
            cout<<i;
            while(i!=b){cout<<", ";break;}
        }
    }
    else
        for(int i=a;i>=b;--i)
        {
            cout<<i;
            while(i!=b){cout<<", ";break;}
        }
}


int main() 
{   
    rangeOfNumbers(9,6);
    return 0;
}