#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int c[a];
   for(int i=0;i<a;i++){
       cin>>c[i];
   }
   int tem=0;
   
   for(int i=0;i<b;i++){
       if(c[i]>0){
           tem++;
       }
       

   }
   int y=c[b-1];
   for(int i=b;i<a;i++){
       if(c[i]==y&&c[i]>0){
           tem++;
       }
   }
 cout<<tem<<endl;
}