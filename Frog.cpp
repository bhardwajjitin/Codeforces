#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&arr,int ind,int n,vector<int>&dp){
    if(ind>=n){
        return 0;
    }
    int first=INT_MAX;
    int second=INT_MAX;
    if(dp[ind]!=-1)return dp[ind];
    if(ind+1<n){
        first=abs(arr[ind+1]-arr[ind])+solve(arr,ind+1,n,dp);
    }
    if(ind+2<n){
        second=abs(arr[ind+2]-arr[ind])+solve(arr,ind+2,n,dp);
    }
    
    return dp[ind]=min(first,second)==INT_MAX ? 0:min(first,second);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    vector<int>dp(n,-1);
    cout<<solve(arr,0,n,dp);
    return 0;
}