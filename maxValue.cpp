#include<iostream>
#include<iomanip>
using namespace std;

double maxValue(int a1[], int x)
{
    int big=a1[0];
    for(int i=1;i<x;++i)
    { 
        {
            if (a1[i]>big){big=a1[i];}
        }
    }
    return big;
}
}
int main() 
{   
int a1[] ={1,2,3,4,4,3,2,1}  ;
int x=secondIndexOf(a1,8,4);
cout<<x;
return 0;
}