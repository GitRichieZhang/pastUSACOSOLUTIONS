/*
ID: RichieZhang
TASK: palsquare
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream fout ("palsquare.out");
    ifstream fin ("palsquare.in");
    int b,re=0,re1=0,r,r1;
    fin>>b;
    int test=0;
    char other,other1;
    int m[30]={0};
    int m1[30]={0};
    for(int rep=1;rep<301;rep++){
        re=0;
        re1=0;
        re=rep*rep;
        re1=rep;
        for(r=0;re>0;r++){
            m[r]=re%b;
            re=re/b;
        }
        for(r1=0;re1>0;r1++){
            m1[r1]=re1%b;
            re1=re1/b;
        }
        
        for(int a=0;a<r/2;a++){
            if(m[a]==m[r-a-1]){
                test=0;
            }
            else{
                test=1;
                break;
            }
        }
        if(test==0){
            for(int a=r1-1;a>-1;a--){
                if(m1[a]>9){
                other=m1[a]-10+'A';
                fout<<other;
                }
                else{
                fout<<m1[a];
                }
                
            }
            fout<<" ";
            for(int a=r-1;a>-1;a--){
                if(m[a]>9){
                other1=m[a]-10+'A';
                fout<<other1;
                }
                else{
                fout<<m[a];
                }
            }
            fout<<endl;
        }
        }
        return 0;
    }
    
    

