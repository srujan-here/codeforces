#include <bits/stdc++.h>
using namespace std;
void caps(string &s){
    for(int i=0;i<s.size();i++){
        if(s[i]<97){
            s[i]=s[i]+32;

        }
    }
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    caps(s1);
    caps(s2);
    
    for(int i=0;i<s1.size();i++){
       if(s1.compare(s2)<0){
           cout<<"-1"<<endl;
           return 0;
       }
       else if(s1.compare(s2)>0){
           cout<<"1"<<endl;
           return 0;
       }

    }
    cout<<"0"<<endl;
    return 0;

    
}