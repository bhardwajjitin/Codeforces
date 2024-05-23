#include<bits/stdc++.h>
using namespace std;

long long solve(vector<int>&cost,vector<int>&happ,int ind,int sal,long long v,vector<vector<long long>>&dp){
    if(ind>=cost.size()){
        return 0;
    }
    if(dp[ind][v]!=-1)return dp[ind][v];
    long long inc=0;
    if(cost[ind]<=v){
        v-=cost[ind];
        inc=happ[ind]+solve(cost,happ,ind+1,sal,v+sal,dp);
    }
    long long exc=solve(cost,happ,ind+1,sal,v+sal,dp);
    return dp[ind][v]=max(inc,exc);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int i,sal;
        cin>>i>>sal;
        vector<int>cost,happ;
        int n=i;
        while(i--){
            int temp,res;
            cin>>res>>temp;
            cost.push_back(res);
            happ.push_back(temp);
        }
        int size=(sal*n)+1;
        vector<vector<long long>>dp(n+1,vector<long long>(size,-1));
        long long v=sal;
        cout<<solve(cost,happ,0,sal,0,dp)<<endl;
    }
    return 0;
}