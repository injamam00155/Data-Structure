#include <fstream>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

void hoursWorked(string filename)
{
    string name="",ID="",time="";
    stringstream line;
    ifstream file(filename);
    file.seekg(0,ios_base::end);
    int lptr=file.tellg();
    file.seekg(0);
    if (file.fail()){cout <<"Error"<<endl;}
    while(file.tellg()!=-1&&file.tellg()!=lptr)
    {   
        line.clear();
        string hours="";
        double thours=0;
        double days=0;
        file>>ID;
        file>>name;
        getline(file,time);
        line<<time;
        while(!file.eol())
        {
            thours=thours+stod(hours);
            days++;
        }
        cout<< name;
        for(int i=0;i<9-name.size();++i){cout<< " ";}
        cout<<"(ID# ";
        for(int i=0;i<4-ID.size();++i){cout<<" ";}
        cout<< ID;
        cout<< ") worked "<<fixed<<setprecision(1)<< thours << " hours ("<<fixed<<setprecision(2)<<thours/days<<"/day)"<<endl;
    }
    file.close();

    
}

int main()
{
    hoursWorked("hours.txt");
    return 0;
}