#include<iostream>
using namespace std;

int factorial(int x)
{
    int y=1;
    while(x>0)
    {
        y=y*x;
        x=x-1;
    }
    return y;
}
int main() 
{   
    int x =factorial(0);
    cout<<x;
    return 0;
}