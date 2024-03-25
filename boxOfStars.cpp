#include<iostream>
using namespace std;

void boxOfStars(int a,int b)
{
    for(int i=0;i<b;++i)
    {
        cout<<"*";
        for(int j=2;j<a;++j)
        {
            if(i==0||i==b-1){cout<<"*";}
            else cout<<" ";
        }
        cout<<"*"<<endl;
    }
}
int main() 
{   
    boxOfStars(8,5);
}