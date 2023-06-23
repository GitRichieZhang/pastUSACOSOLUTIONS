/*
ID: RichieZhang
TASK: namenum
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    ofstream fout ("namenum.out");
    ifstream fin ("namenum.in");
    ifstream readFile("dict.txt");
    string n,word;
    fin>>n;
    int lengtha,lengthb;
    int t=0,c=0;
    char match[26]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,0,7,7,8,8,8,9,9,0};
    lengtha=n.length();

    
    while(readFile>>word){
        lengthb=word.length();
        if(lengtha==lengthb){
            t=0;
            for(int sense=0;sense<lengtha&&t==0;sense++){
                if(n[sense]-'0'==match[word[sense]-'A']){
                    t=0;
                }
                else{
                    t=1;
                    break;
                }
            }
            if(t==0){
            fout<<word<<endl;
                c++;
            }
        }
    }
    if(c==0)
    fout<<"NONE"<<endl;
    return 0;
}
