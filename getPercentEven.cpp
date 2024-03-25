#include<iostream>
#include<iomanip>
using namespace std;

double getPercentEven(int a1[],int x)
{
    float c=0;
    if(x==0){return 0;}
    for (int i=0;i<x;++i)
    {
        if(a1[i]%2==0)
        {
            c++;
        }
    }
    
    return c*100/x;
}
int main() 
{   
int a1[] = {3, 5, 6};
double x=getPercentEven(a1,3);
cout<<x;
return 0;
}