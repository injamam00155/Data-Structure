#include<iostream>
using namespace std;

int digitCount(int x)
{
    int c=0;
    while(x!=0)
    {
        ++c;
        x=x/10;
    }
    return c;
}
int main() 
{   
    int x =digitCount(1234);
    cout<<x;
    return 0;
}