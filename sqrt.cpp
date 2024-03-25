#include<iostream>
using namespace std;

double sqrt(int N)
{   
    double x1=N,x2=N,T=N;
    if (N==1){return 1;}
    else
    {
        do
        {   
            x1=T;
            x2=(x1+N/x1)/2;
            T=x2;
        }
        while(x1!=x2);
        return int(x1);
    }
}
int main()
{   
    int x=sqrt(9);
    cout<<x;
    return 0;
}
