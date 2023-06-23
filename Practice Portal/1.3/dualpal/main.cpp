/*
ID: RichieZhang
TASK: dualpal
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("dualpal.out");
    ifstream fin ("dualpal.in");
    int n,s,current=0,test=0,test1=0;
    int m[30];
    int re,r;
    fin>>n;
    fin>>s;
    for(int a=s+1;a<50000&&current<n;a++){
        re=a;
        test1=0;
        test=0;
        r=0;
        for(int b=2;b<11&&test1<2;b++){
            for(r=0;re!=0;r++){
                m[r]=re%b;
                re=re/b;
            }
            for(int c=0;c<r/2;c++){
                if(m[c]==m[r-c-1]){
                }
                else{
                test++;
                break;
                }
            }
            if(test==0){
                test1++;
            }
            test=0;
            re=a;
        }
        if(test1==2){
            fout<<a<<endl;
            current++;
        }
        test1=0;
    }
    return 0;
}
