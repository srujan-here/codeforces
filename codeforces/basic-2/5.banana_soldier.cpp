#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int t=0;
    for(int i=1;i<=c;i++){
        t+=(i*a);

    }
    if(t>b){
        cout<<t-b<<endl;    }
        else{
            cout<<"0"<<endl;
        }
}