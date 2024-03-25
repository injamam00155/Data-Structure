#include <fstream>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

void wordStatsPlus(string filename)
{
    int uc=0, l=0, w=0,lc=0;
    ifstream file(filename);
    if(file.fail()){cout<<"Error, bad input file.";return;}
    stringstream fileinline;
    string line;
    while(!file.eof())
    {
        l++;
        getline(file,line);
        line=line+" ";
        fileinline<<line;
    }
    while(fileinline>>line)
    {
        lc=lc+line.size();
        w++;
    }
    line = fileinline.str();
    transform(line.begin(),line.end(),line.begin(),::tolower);
    for(char i='a';i<='z';i++)
    {
    
        for(int j=0;j<line.size();j++)
        {
            if(line[j]==i)
            {
                uc++;
                break;
            }
        }
    }
    
cout<<"Total lines = "<<l<<"\nTotal words = "<<w<<"\nTotal unique letters = "<<uc<<" ("<<(uc*100)/26<<"% of alphabet)\nAverage word length = "<<float(w)/float(l)<<"\nAverage words/line = "<< float(lc)/float(w) <<endl;
}  

int main()
{
    wordStatsPlus("tobe.txt");
    return 0;
}
