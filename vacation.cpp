#include<bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>>&grid,int ind,int prev,vector<vector<int>>&dp){
    if(ind<0)return 0;

    if(dp[ind][prev+1]!=-1)return dp[ind][prev+1];
    int mini=INT_MIN;
    for(int i=0;i<3;i++){
        if(i!=prev){
            int sum=grid[ind][i]+solve(grid,ind-1,i,dp);
            mini=max(mini,sum);
        }
    }
    return dp[ind][prev+1]=mini;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>grid(n,vector<int>(3));
    for(int i=0;i<n;i++){
        cin>>grid[i][0]>>grid[i][1]>>grid[i][2];
    }
    // vector<vector<int>>dp(n,vector<int>(4,-1));
    // cout<<solve(grid,n-1,-1,dp);
    vector<vector<int>>dp(n,vector<int>(3,0));
    dp[0][0]=max(grid[0][1],grid[0][2]);
    dp[0][1]=max(grid[0][0],grid[0][2]);
    dp[0][2]=max(grid[0][1],grid[0][0]);

    for(int i=1;i<n;i++){
        
        for(int last=0;last<3;last++){
            int maxi=0;
          for(int j=0;j<3;j++){
            if(last!=j){
            int sum=grid[i][j]+dp[i-1][j];
            maxi=max(maxi,sum);
            }
          }
          dp[i][last]=maxi;
        }
    }

    int ans=INT_MIN;
    for(int i=0;i<3;i++){
        ans=max(ans,dp[n-1][i]);
    }
    cout<<ans;
    return 0;
}