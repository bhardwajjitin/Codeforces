#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    unordered_map<int,int>umap;
    int cnt=0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        umap[temp]++;
        if(umap[temp]==2)cnt++;
    }
    cout<<cnt<<endl;
   }
}