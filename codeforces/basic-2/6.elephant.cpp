#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    int m=t/5;
    if(t%5==0){
        cout<<m<<endl;
    }
    else{
        cout<<m+1<<endl;
    }
}