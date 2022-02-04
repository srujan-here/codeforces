#include <bits/stdc++.h>
using namespace std;
int main(){
    int m[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>m[i][j];
        }
    }
    int tem=0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(m[i][j]==1){
                if(j<2){
                    tem=2-j;

                }
                else if(j>2){
                    tem=j-2;
                }
                if(i>2){
                    tem+=(i-2);
                }
                else if(i<2){
                    tem+=(2-i);
                }

                break;

            }
            
        }
    }
    cout<<tem<<endl;
}

