#include<iostream>
#include<cmath>
using namespace std;

int factorCount(int m)
{
    int i=2,c=1;
    while (i<=m)
    {
        if(m%i==0)
        {
            ++c;
        }
        i++;
    }
    return c;
}

int main()
{   
    cout<<factorCount(12);
    return 0;
}