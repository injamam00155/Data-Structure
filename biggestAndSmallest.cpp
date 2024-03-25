#include<iostream>
using namespace std;

int main()
{   int n,big,small;
    cout<<"Number of numbers? ";
    cin>>n;
    for(int i=1;i<=n;++i)
    {   
        int x;
        cout<<"Number "<<i<<": ";
        cin>>x;
        if(i==1){big=x;small=x;}
        else
        {
            if (x>big){big=x;}
            else if(x<small){small=x;}
        }
    }
    cout<<"Biggest = "<<big<<endl<<"Smallest = "<<small;
 return 0;
}
