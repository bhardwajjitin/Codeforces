#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&arr,int ind,int n,int k,vector<int>&dp){
    if(ind>=n)return 0;
    
    if(dp[ind]!=-1)return dp[ind];
    int mini=INT_MAX;
    for(int i=1;i<=k;i++){
        if(ind+i<n){
           int inc=abs(arr[ind+i]-arr[ind])+solve(arr,ind+i,n,k,dp);
           mini=min(mini,inc);
        }
    }

    return dp[ind]=mini==INT_MAX?0:mini;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    vector<int>dp(n,-1);
    cout<<solve(arr,0,n,k,dp);
    return 0;
}