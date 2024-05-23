#include<bits/stdc++.h>
using namespace std;

// to find length of LCS
int solve(string&a,string&b,int i,int j){
    if(i<0 || j<0)return 0;


    if(a[i]==b[j]){
        return 1+solve(a,b,i-1,j-1);
    }
    else{
        return max(solve(a,b,i-1,j),solve(a,b,i,j-1));
    }

}
int main(){
    string a,b;
    cin>>a>>b;
    int m=a.size();
    int n=b.size();
    // cout<<solve(a,b,m-1,n-1);
    // fill the DP table to print the string

    vector<vector<int>>dp(m+1,vector<int>(n+1,0));
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(a[i-1]==b[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    int i=m;
    int j=n;
    string ans="";
    while(i!=0 && j!=0){
        if(a[i-1]==b[j-1]){
            ans+=a[i-1];
            i--;
            j--;
        }
        else{
            if(dp[i-1][j]>dp[i][j-1]){
                i--;
            }
            else{
                j--;
            }
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
    return 0;
}