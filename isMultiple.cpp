#include<iostream>
using namespace std;

bool isMultiple(int x,int y)
{
    if(x%y==0){return true;}
    return false;
}
int main() 
{   
    bool x =isMultiple(8,4);
    cout<<x;
    return 0;
}