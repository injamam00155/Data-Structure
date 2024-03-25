#include<iostream>
using namespace std;

void fitnessGoal(int x)
{
    cout<<"Train until you increase for "<<x<<" days."<<endl;
    int c=0,tc=0,min=0,lmin=0;
    while(c<x)
    {
        cout<<"Minutes?";
        cin>>min;
        if(min>lmin){cout<<"Great Job!"<<endl;c++;}
        else {cout<<"Start Over."<<endl;c=0;}
        lmin=min;
        tc++;
    }
    cout<<"Reached your goal in "<<tc<<" total days!";
    
}
int main() 
{   
    fitnessGoal(2);
    return 0;
}