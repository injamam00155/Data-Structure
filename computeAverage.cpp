#include<iostream>
#include<iomanip>
using namespace std;

double computeAverage(int a1[],int x)
{   
    double sum =0;
    for (int i=0;i<x;++i)
    {   
        sum=sum+a1[i];
    }
    return sum/x;
}
int main() 
{   
int a1[] = {1, -2, 4, -4, 9, -6, 16, -8, 25, -10};
float x=computeAverage(a1, 10);
cout<<x;
    return 0;
}