#include<iostream>
using namespace std;

bool dateIsBefore(int m1, int d1, int m2, int d2)
{   
    if(m1<m2){return true;}
    else if (m1==m2)
    {
        if(d1<d2){return true;}
    }
    return false;
} 

int main()
{   
int percent;
cout<<"What percentage did you earn? "<<endl;
cin>>percent;
if (percent >= 90) 
{
    cout << "You got an A!" << endl;
}
else if (percent >= 80) 
{
    cout << "You got a B!" << endl;
}
else if (percent >= 70) 
{
    cout << "You got a C!" << endl;
}
else if (percent >= 60) {
    cout << "You got a D!" << endl;
}
else cout << "You got an F!" << endl;
}
