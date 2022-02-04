#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a>>b;
    int t=0;
    while(a<=b){
        t++;
        a=a*3;
        b=b*2;
    }
    cout<<t<<endl;
}