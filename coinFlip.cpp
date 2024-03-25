#include<iostream>
using namespace std;

void coinFlip(int n, char side)
{
    if(n<0||(side!='H'&&side!='T')){cout<<"ERROR!"<<endl;return;}
    
    int c=0;
    char choice[2]={'T','H'};
    char luck=' ';
    while(c<n)
    {
        luck=choice[rand()%2];
        cout<<luck<<" ";
        if(luck==side){++c;}
        else c=0;
    }
    cout<<endl<<"You got "<<side<<" "<<n<<" times in a row!";
}
int main() 
{   
    coinFlip(3,'H');
    return 0;
}