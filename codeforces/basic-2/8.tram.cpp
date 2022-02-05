#include <bits/stdc++.h>
using namespace std;
int main(){
    int t1;
    cin>>t1;
    int t=0,ans=0;
    
    while(t1--){
        int a,b;
        cin>>a>>b;
        t=b-a+t;
        ans=max(ans,t);

    }
    cout<<ans<<endl;
}
