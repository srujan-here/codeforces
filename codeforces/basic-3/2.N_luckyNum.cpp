#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
   

  ll n;
  cin>>n;
    int ans=0;
    while(n!=0){
       if(n%10==4||n%10==7){
           ans++;
       }
       n=n/10;
    }
    if(ans==4 ||ans==7){
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;
}