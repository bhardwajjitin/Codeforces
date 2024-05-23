#include<bits/stdc++.h>
using namespace std;

long long solve(vector<long long>&weight,vector<long long>&value,int W,int ind,vector<vector<long long>>&dp){
    if(ind<0){
        return 0;
    }
    if(dp[ind][W]!=-1)return dp[ind][W];
    long long exc=solve(weight,value,W,ind-1,dp);
    long long inc=0;
    if(W>=weight[ind]){
        inc=value[ind]+solve(weight,value,W-weight[ind],ind-1,dp);
    }
    return dp[ind][W]=max(inc,exc);
}
int main(){
    int n,W;
    cin>>n>>W;
    vector<long long>weight(n),value(n);
    for(int i=0;i<n;i++){
        cin>>weight[i]>>value[i];
    }
    // vector<vector<long long>>dp(n,vector<long long>(W+1,-1));
    // cout<<solve(weight,value,W,n-1,dp);
    // tabulation
    vector<vector<long long>>dp(n,vector<long long>(W+1,0));
    for(int i=0;i<=W;i++){
        if(i>=weight[0])dp[0][i]=value[0];
    }
    for(int i=1;i<n;i++){
        for(long long w=0;w<=W;w++){
            long long exc=dp[i-1][w];
            long long inc=0;
            if(w>=weight[i]){
                inc=value[i]+dp[i-1][w-weight[i]];
            }
            dp[i][w]=max(inc,exc);
        }
    }
    cout<<dp[n-1][W];
    return 0;
}