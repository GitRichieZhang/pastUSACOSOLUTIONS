/*
ID: RichieZhang
TASK: transform
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("transform.out");
    ifstream fin ("transform.in");
    int n=0;
    fin>>n;
    char before[n][n];
    char after[n][n];
    char process[n][n];
    char process1[n][n];
    char process2[n][n];
    char process3[n][n];
    int test=0;
    for(int in=0;in<n;in++){
        for(int in1=0;in1<n;in1++)
            fin>>before[in][in1];
    }
    for(int in=0;in<n;in++){
        for(int in1=0;in1<n;in1++)
            fin>>after[in][in1];
    }
    //1
    for(int one=0;one<n&&test==0;one++){
        for(int one1=0;one1<n&&test==0;one1++){
            process[one1][n-one-1]=before[one][one1];
            if(process[one1][n-one-1]!=after[one1][n-one-1]){
                test=1;
            }
        }
    }
    if(test==0){
    fout<<"1"<<endl;
    return 0;
    }
    //2
    test=0;
    for(int one=0;one<n&&test==0;one++){
        for(int one1=0;one1<n&&test==0;one1++){
            process[n-one-1][n-one1-1]=before[one][one1];
            if(process[n-one-1][n-one1-1]!=after[n-one-1][n-one1-1]){
                test=1;
            }
        }
    }
    if(test==0){
    fout<<"2"<<endl;
    return 0;
    }
    //3
    test=0;
    for(int one=0;one<n&&test==0;one++){
        for(int one1=0;one1<n&&test==0;one1++){
            process[n-one1-1][one]=before[one][one1];
            if(process[n-one1-1][one]!=after[n-one1-1][one]){
                test=1;
            }
        }
    }
    if(test==0){
    fout<<"3"<<endl;
    return 0;
    }
    //4
    test=0;
    for(int one=0;one<n&&test==0;one++){
        for(int one1=0;one1<n&&test==0;one1++){
            process[one][n-one1-1]=before[one][one1];
            if(process[one][n-one1-1]!=after[one][n-one1-1]){
                test=1;
            }
        }
    }
    if(test==0){
    fout<<"4"<<endl;
    return 0;
    }
    //5
    test=0;
    for(int one=0;one<n&&test==0;one++){
        for(int one1=0;one1<n&&test==0;one1++){
            process[one][n-one1-1]=before[one][one1];
            }
        
    }
    //A
    test=0;
    for(int one=0;one<n&&test==0;one++){
        for(int one1=0;one1<n&&test==0;one1++){
            process1[one1][n-one-1]=process[one][one1];
            if(process1[one1][n-one-1]!=after[one1][n-one-1]){
                test=1;
            }
        }
    }
    if(test==0){
    fout<<"5"<<endl;
    return 0;
    }
    //B
    test=0;
    for(int one=0;one<n&&test==0;one++){
        for(int one1=0;one1<n&&test==0;one1++){
            process2[n-one-1][n-one1-1]=process[one][one1];
            if(process2[n-one-1][n-one1-1]!=after[n-one-1][n-one1-1]){
                test=1;
            }
        }
    }
    if(test==0){
    fout<<"5"<<endl;
    return 0;
    }
    //C
    test=0;
    for(int one=0;one<n&&test==0;one++){
        for(int one1=0;one1<n&&test==0;one1++){
            process3[n-one1-1][one]=process[one][one1];
            if(process3[n-one1-1][one]!=after[n-one1-1][one]){
                test=1;
            }
        }
    }
    if(test==0){
    fout<<"5"<<endl;
    return 0;
    }
    //6
    test=0;
    for(int one=0;one<n&&test==0;one++){
        for(int one1=0;one1<n&&test==0;one1++){
            if(after[one][one1]!=before[one][one1]){
                test=1;
            }
        }
    }
    if(test==0){
    fout<<"6"<<endl;
    return 0;
    }
    fout<<"7"<<endl;
    return 0;
    
}
/*
@-@
---
@@-
 
1.
@-@
@--
--@
 
2.
-@@
---
@-@
 
3.
@--
--@
@-@
 
 4.
 @-@
 ---
 -@@
 
 5.
 a)
 --@
 @--
 @-@
 
 b)
 @@-
 ---
 @-@
 
 c)
 @-@
 --@
 @--
 
 
 
 */
