#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int temp=ceil((double)y/2);
        int res=15*temp-y*4;

        if(res>=x)cout<<temp<<endl;
        else{
            int remain=x-res;
            int extra=ceil((double)remain/15);
            cout<<temp+extra<<endl;
        }
    }
    return 0;
}