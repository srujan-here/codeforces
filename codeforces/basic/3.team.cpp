#include <bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin >> t;
   vector<vector<int> >m1(t);
   for(int i=0;i<t;i++){
       int a,b,c;
       cin >>a>>b>>c;
       m1[i].push_back(a);
       m1[i].push_back(b);
       m1[i].push_back(c);

   }
int tem=0;
   for(auto r:m1){
       int ho=0;
       for(int t:r){
           if(t==1){
               ho++;
           }
       }
       if(ho>=2){
           tem++;
       }
       ho=0;
   }
cout<<tem<<endl;
   
}