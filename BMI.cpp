#include<iostream>
using namespace std;
float BMI()
{
    float height=0,weight=0,bmi;
    cout<<"height (in inches)? ";
    cin>>height;
    cout<<"weight (in pounds)? ";
    cin>>weight;
    bmi=(weight*703)/(height*height);
    return bmi;
}

int stage(float y)
{   
    int x;
    if (y>=30)
    {
        x=4;
    }
    else if(y>=25)
    {
        x=3;
    }
    else if(y>=18.5)
    {
        x=2;
    }
    else{x=1;}
    return x;
}


int main()
{   
    cout<<"This program reads data for two people\nand computes their body mass index (BMI).\n"<<endl;
    float m1,m2;
    int c;
    cout<<"Enter Person 1's information:"<<endl;
    m1=BMI();
    c=stage(m1);
    cout<<"BMI = "<<m1<<", class "<<c<<endl;
    cout<<endl;
    cout<<"Enter Person 2's information:"<<endl;
    m2=BMI();
    c=stage(m2);
    cout<<"BMI = "<<m2<<", class "<<c<<endl<<endl;
    if(m1>m2)
    {
        cout<<"BMI difference = "<<m1-m2;
    }
    else{cout<<"BMI difference = "<<m2-m1;}
    return 0;
}