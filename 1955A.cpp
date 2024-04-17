#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
       int n,a,b;
       cin>>n>>a>>b;
       int price=0;
       int res=b/2;
       int q=n/2;
       int r=n%2;
       if(res<a){
         price+=q*b+r*a;
       }
       else{
        price+=n*a;
       }
       cout<<price<<endl;
   }
   return 0;
}