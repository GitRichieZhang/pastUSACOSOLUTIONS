/*
ID: richiez2
TASK: ride
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string a,b;
    int a1=1,b1=1;
    fin >> a >> b;
    for(int c=0;c<a.length();c++)
        a1*=(int(a[c])-64);
    
    for(int c=0;c<b.length();c++)
        b1*=(int(b[c])-64);
    
    if(a1%47==b1%47)
        fout <<"GO"<<endl;
    else
        fout<<"STAY"<<endl;
    return 0;
}
