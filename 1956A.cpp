#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k,n;
        cin>>k>>n;
        int startnode;
        int ans=INT_MAX;
        for(int i=0;i<k;i++){
            cin>>startnode;
            ans=min(ans,startnode);
        }
        for(int i=0;i<n;i++){
            int res;
            cin>>res;
            if(res<ans)cout<<res<<" ";
            else{
                cout<<ans-1<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}