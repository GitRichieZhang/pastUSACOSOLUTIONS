/*
ID: RichieZhang
TASK: beads
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int extra(int x,int y){
    if(x>y-1)
        x=x%y;
    if(x<0)
        x=x+y;
    return x;
}

int main() {
    ofstream fout ("beads.out");
    ifstream fin ("beads.in");
    int n,test=0,max=0,line,linel=0,liner=0,maxl=0,maxr=0,now;
    
    fin>>n;
    char bead[n];
    for(int in=0;in<n;in++){
        fin>>bead[in];
        if(bead[in]!=bead[0]){
            test++;
    }
}
    if(test==0){
        fout<<n<<endl;
        return 0;
    }
        

    else{
        for(line=0;line<n;line++){
            maxl=0;
            maxr=0;
            liner=extra(line+1,n);
            /*left search*/
            linel=line;
            
            while(bead[linel]=='w'){
                maxl++;
                linel=extra(linel-1,n);
            }
            now=bead[linel];
            while(bead[linel]=='w'||bead[linel]==now){
                maxl++;
                linel=extra(linel-1,n);
            }
           /*right search*/
            while(bead[liner]=='w'){
                maxr++;
                liner=extra(liner+1,n);
            }
            now=bead[liner];
            while(bead[liner]=='w'||bead[liner]==now){
                maxr++;
                liner=extra(liner+1,n);
            }
            if(maxr+maxl>max){
                max=maxr+maxl;
            }
}
        if(max>n)
            max=n;
        fout<<max<<endl;
        return 0;
}
    
}
