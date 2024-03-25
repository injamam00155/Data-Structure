#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinary(int m)
{
    int bin=0,i=0;
    while (m>0)
    {
        bin=bin+(m%2)*pow(10,i);
        m=m/2;
        i++;
    }
    return bin;
}

int main()
{   
    cout<<decimalToBinary(10);
    return 0;
}