#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    vector<int> t;
    if(s.size()==1){
        cout<<s[0]<<endl;
        return 0;
    }
for(int i=0;i<s.size();i+=2){
    t.push_back(s[i]-'0');
} 
sort(t.begin(),t.end());

for(int i=0;i<t.size()-1;i++){
    cout<<t[i]<<'+';
}cout<<t[t.size()-1]<<endl;
}