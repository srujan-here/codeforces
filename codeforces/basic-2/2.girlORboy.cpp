#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    set<char> m1;
    for(char r:s){
        m1.insert(r);
    }
    int t=m1.size();
    if(t%2==0){
        cout <<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
}