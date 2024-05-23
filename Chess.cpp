#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if((x+y+z)%2!=0){
            cout<<-1<<endl;
        }
        else if(x+y<=z){
            cout<<x+y<<endl;
        }
        else{
            cout<<(x+y+z)/2<<endl;
        }
    }
    return 0;
}