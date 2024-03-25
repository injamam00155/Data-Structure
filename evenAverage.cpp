#include<iostream>
using namespace std;

int main()
{   
    int count = 0, x=0, sum=0; 
    float average=0;
    cout<<"Integer? ";
    cin>>x;
    while(x!=0)
    {
        if(x%2==0)
        {   
            sum=sum+x;
            count++;
        }    
        cout<<"Integer? ";
        cin>>x; 
    }
    average=float(sum)/float(count);
    cout<<"Average: "<<average<< endl;
    return 0;
}