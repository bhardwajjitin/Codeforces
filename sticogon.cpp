#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int>umap;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            umap[temp]++;
        }
        long long cnt=0;
        for(auto it:umap){
            int val=it.second;
            if(val>=3){
                cnt+=floor((double)val/3);
            }
        }
        cout<<cnt<<endl;
    }
}