#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string r="";
    r+=s[0];
    int t=0;
    char y=r[0];
    for(int i=1;i<s.size();i++){
        
        if(y!=s[i]){
            r+=s[i];
            y=s[i];

        }

    }
    int g1=s.size();
    int g2=r.size();
    cout<<g1-g2<<endl;
}