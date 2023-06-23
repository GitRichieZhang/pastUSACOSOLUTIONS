/*
ID: RichieZhang
TASK: friday
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");
    int n;
    int week[7]={0};
    int day=0;
    int c=0;
    fin>>n;
    for(int a=1900;a<1900+n;a++){
        for(int month=1;month<13;month++){
            day++;
            c=(13+day-1)%7;
            week[c]++;
            if(month==9||month==6||month==11||month==4){
                day=(day+29)%7;
            }
            else if(month==2){
                if((a%4==0&&a%100!=0)||a%400==0){
                day=(day+28)%7;
                }
                else{
                day=(day+27)%7;
                }
            }
            else{
                day=(day+30)%7;
            }
           
        }
        
    }
    fout<<week[6];
    for(int out=0;out<6;out++){
        fout<<" "<<week[out];
    }
    fout<<endl;
    return 0;
}
