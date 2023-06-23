/*
ID: RichieZhang
TASK: milk2
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("milk2.out");
    ifstream fin ("milk2.in");
    int n,max=0,inter=0;
    int left,right,compare[2];
  
    fin>>n;
    int farm[n][2];
    for(int in=0; in<n; in++){
        fin>>farm[in][0];
        fin>>farm[in][1];
    }
    
    
    if(n==1){
        max=farm[0][1]-farm[0][0];
        inter=0;
    }
    else{
        for(int rank=0; rank<n-1; rank++){
            for(int rep=0;rep<n-1; rep++){
                compare[0]=farm[rep][0];
                compare[1]=farm[rep][1];
                if(compare[0]>farm[rep+1][0]){
                    farm[rep][0]=farm[rep+1][0];
                    farm[rep][1]=farm[rep+1][1];
                    farm[rep+1][0]=compare[0];
                    farm[rep+1][1]=compare[1];
                }
                
            }
        }
        for(int i=0;i<n;i++){
                cout<<farm[i][0]<<" "<<farm[i][1]<<endl;
        }
        int left=farm[0][0],right=farm[0][1];
        for(int rep=1; rep<n;rep++){
            if(right>=farm[rep][1]){
                if(right-left>max){
                    max=right-left;
                }
            }
            else if(farm[rep][0]>right){
                if(farm[rep][0]-right>inter){
                    inter=farm[rep][0]-right;
                }
                left=farm[rep][0];
                right=farm[rep][1];
                if(farm[rep][1]-farm[rep][0]>max){
                   max=right-left;
                }
            }
            else if(right>=farm[rep][0]){
                
                if(farm[rep][1]-left>max){
                    max=farm[rep][1]-left;
                }
                right=farm[rep][1];
            }
            
        }
        
        
        
    }
    fout<<max<<" "<<inter<<endl;
    return 0;
}
