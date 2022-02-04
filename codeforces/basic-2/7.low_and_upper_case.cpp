#include <bits/stdc++.h>
using namespace std;
void toup(string &s){
for(int i=0; i<s.size();i++){
if(s[i]>=97){
    s[i]=s[i]-32;
}
}
}

void tolo(string &s){
for(int i=0; i<s.size();i++){
if(s[i]<97){
    s[i]=s[i]+32;
}
}
}
int main(){
    string s;
    cin >> s;
    int u=0,l=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>=97){
            l++;
        }
        else{
            u++;
        }

    }
    if(l>=u){
        tolo(s);
        cout<<s<<endl;
    }
    else{
        toup(s);
        cout<<s<<endl;
    }

}