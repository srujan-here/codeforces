#include <bits/stdc++.h>
using namespace std;
int main(){
    int b;
    cin>>b;
   string s;
   cin >> s;
   int t1=0,t2=0;
   for(int i=0;i<s.length();i++){
       if(s[i]=='A'){
           t1++;
       }
       else{
           t2++;
       }
   }
   if(t1>t2){
       cout<<"Anton"<<endl;
   }
   else if(t1<t2){
       cout<<"Danik"<<endl;
   }
   else
   cout<<"Friendship"<<endl;
}
