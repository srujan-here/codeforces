#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    string s;
    cin>> s;
    while(t--){
        for(int i=0;i<s.size();i++){
            if((s[i]=='B' &&s[i+1]=='G')){
                s[i]='G';
                s[i+1]='B';
                i++;
            }
           


        }
        if(s.size()%2!=0){
            if(s[s.size()-2]=='B'&&s[s.size()-1]=='G'){
                s[s.size()-2]='G';
                s[s.size()-1]='B';
            }
        }
    }
    cout<<s<<endl;
}