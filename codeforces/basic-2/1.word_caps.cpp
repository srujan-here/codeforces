#include <bits/stdc++.h>
using namespace std;
void cap(string &s){
if(s[0]>=97){
    s[0]=s[0]-32;
}
}
int main(){
    string s;
    getline(cin, s);
    cap(s);cout<<s<<endl;
}