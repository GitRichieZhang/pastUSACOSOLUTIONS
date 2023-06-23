/*
ID: RichieZhang
TASK: ride
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    /*ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string comet,group;
    fin>>comet;
    fin>>group;
    int i=0,l,cometv=1,groupv=1;
   
    while(comet[i]!='\0'){
        l=comet[i]-'A'+1;
        cometv=cometv*l;
        i++;
    }
    i=0;
    while(group[i]!='\0'){
        l=group[i]-'A'+1;
        groupv=groupv*l;
        i++;
    }
    
    if(groupv%47==cometv%47){
        fout<<"GO"<<endl;
    }
    else{
        fout<<"STAY"<<endl;
    }*/
    int money[10][3];
    cin>>money[0][0];
    cin>>money[0][1];
    cout<<money[0][0];
    cout<<money[0][1];
    return 0;
}
