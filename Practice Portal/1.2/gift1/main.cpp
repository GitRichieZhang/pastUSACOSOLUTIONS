/*
ID: RichieZhang
TASK: gift1
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    int np;
    fin>>np;
    int money[np][3];
    int a,b,c,d;
    for(a=0;a<np;a++)
        money[a][0]=0;
    string i[np];
    string name,name1;

    for(a=0;a<np;a++){
        fin>>i[a];
        money[a][0]=0;
    }
    for(int rep=0; rep<np; rep++){
        fin>>name;
        for(c=0;c<np;c++){
            if(i[c]==name)
                break;
        }
        fin>>money[c][1];
        fin>>money[c][2];
        if(money[c][2]!=0){
        for(d=0;d<money[c][2];d++){
            fin>>name1;
            for(b=0;b<np;b++){
                if(name1==i[b])
                    break;
            }
        money[b][0]=money[b][0]+money[c][1]/money[c][2];
        }
        money[c][0]=money[c][0]-money[c][1]+money[c][1]%money[c][2];
    }
    }
    for(int out=0;out<np; out++)
        fout<<i[out]<<" "<<money[out][0]<<endl;
    return 0;
}

