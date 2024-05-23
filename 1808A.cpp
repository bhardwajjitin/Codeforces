#include<bits/stdc++.h>
using namespace std;

int get(int n){
    int maxi=INT_MIN;
    int mini=INT_MAX;
    while(n!=0){
        int r=n%10;
        maxi=max(maxi,r);
        mini=min(mini,r);
        n=n/10;
    }
    return abs(maxi-mini);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int res;
        int maxi=INT_MIN;
        for(int i=l;i<=r;i++){
           int ans=get(i);
           if(ans>maxi){
            maxi=ans;
            res=i;
           }
        }
        cout<<res<<endl;
    }
    return 0;
}