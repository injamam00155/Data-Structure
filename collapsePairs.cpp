#include<iostream>
#include<iomanip>
using namespace std;

void collapsePairs(int a1[],int x)
{   
    for (int i=0;i<x-1;i=i+2)
    {   
        if(i==x)
        {
            break;
        }
        else if((a1[i]+a1[i+1])%2==0)
        {
            a1[i]=a1[i]+a1[i+1];
            a1[i+1]=0;
        }
        else 
        {
            a1[i+1]=a1[i]+a1[i+1];
            a1[i]=0;
        }
    }
}
int main() 
{   
int a1[] = {7, 2, 8, 9, 4, 22, 7, 1, 9, 10};
collapsePairs(a1, 3);
for (int i=0;i<10;i++)
{
    cout<<a1[i]<<" ";
}
    return 0;
}