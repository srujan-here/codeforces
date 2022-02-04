#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >> a>>b;
    int t=a*b;
    if(t%2==0){
        cout<<t/2<<endl;
    }
    else{
        cout<<(t-1)/2<<endl;
    }
}