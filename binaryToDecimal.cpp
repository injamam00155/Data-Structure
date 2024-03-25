#include<iostream>
#include<cmath>
using namespace std;

int binaryToDecimal(int m)
{
    int dec=0,i=0;
    while (m>0)
    {
        dec=dec+(m%10)*pow(2,i);
        m=m/10;
        i++;
    }
    return dec;
}

int main()
{   
    cout<<binaryToDecimal(101011);
    return 0;
}