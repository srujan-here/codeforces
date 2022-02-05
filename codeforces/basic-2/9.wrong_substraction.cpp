#include <bits/stdc++.h>
using namespace std;
int main(){
    int n1,k;
    cin >> n1 >> k;
    while(k--){
        int t=n1%10;
        if(t!=0){
            n1=n1-1;

        }
        else{
            n1=n1/10;
            
        }
    }
    cout <<n1<<endl;

}