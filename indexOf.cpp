#include<iostream>
#include<iomanip>
using namespace std;

double indexOf(int a1[],int x, int f)
{
    for (int i=0;i<x;++i)
    {
        if(a1[i]==f)
        {
            return i;
        }
    }
    return -1;
}
int main() 
{   
int a1[] = {5, 6,3};
int x=indexOf(a1,3,4);
cout<<x;
return 0;
}