#include<iostream>
#include<iomanip>
using namespace std;

int secondIndexOf(int a1[],int x, int f)
{
    for (int i=0;i<x;++i)
    {   
        if(a1[i]==f)
        {   
            for(int j=i+1;j<x;++j)
            {
                if(a1[j]==f){return j;}
            }
            return -1;
        }
    
    }
    return -1;
}
int main() 
{   
int a1[] ={1,2,3,4,4,3,2,1}  ;
int x=secondIndexOf(a1,8,4);
cout<<x;
return 0;
}