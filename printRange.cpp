#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

void printRange(int x,int y)
{   
    if(x>y){throw x;}
    static int count,mid;
    static int c = 1;
    if (c==1)
    {
        count = (y-x+1);
        mid=(x+y)/2;
    }
    if (count%2==1)
    {
        if(x<mid){cout<<x<< " > ";}
        else
        {
            if(x!=y){cout<<x<<" < ";}
            else{cout<<x;}
        }
    }
    else
    {
        if(x<mid){cout<<x<< " > ";}
        else if(x==mid){cout<<x<<" -- ";}
        else
        {
            if(x!=y){cout<<x<<" < ";}
            else{cout<<x;}
        }
    }
    if (x==y){return;}
    c++;
    printRange(x+1,y);
}

int main()
{
    printRange(1,10);

    return 0;
}