#include<iostream>
using namespace std;

bool isPrimeNumber(int x)
{   if(x<=1){return false;}
    for(int i=2;i<x;++i)
    {
        if(x%i==0){return false;}
    }
    return true;
}
int main() 
{   
    bool x =isPrimeNumber(-5);
    cout<<x;
    return 0;
}