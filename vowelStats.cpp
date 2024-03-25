#include <fstream>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
using namespace std;

void vowelStats(string myfile)
{
    ifstream input_file(myfile);
    string line="";
    int total=0,c=0,max=0;
    while(getline(input_file,line))
    {
        int vowel=0;
        for(int i = 0 ; i<line.size();i++)
        {
            if(line[i]=='a'||line[i]=='A'||line[i]=='e'||line[i]=='E'||line[i]=='i'||line[i]=='I'||line[i]=='o'||line[i]=='O'||line[i]=='u'||line[i]=='U')
            {
                vowel++;
            }
            
        }
        if(line.size()>max)
            {
                max=line.size();
            }
            total=total+line.size();
            ++c;
            cout<<"Line "<<c<<" has "<<line.size()<<" chars and "<<vowel<<" vowels"<<endl;
        
    }
    cout<<c<<" lines; longest = "<<max<<", average = "<<float(total)/c;
}
int main()
{
    vowelStats("carrol.txt");
    return 0;
}