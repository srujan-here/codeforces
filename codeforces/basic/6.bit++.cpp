#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    int x=0;
    while(a--){
        string s;
        cin>>s;
        if(s[0]=='+'){
            x++;
        }
        else if(s[0]=='-'){
            x--;
        }
        else if(s[2]=='+'){
            x++;
        }
        else if(s[2]=='-'){
            x--;
        }
    }
    cout<<x<<endl;
}