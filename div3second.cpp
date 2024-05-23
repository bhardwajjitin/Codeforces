#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string temp;
        cin>>temp;
        set<char>st;
        for(auto it:temp){
            st.insert(it);
        }
        vector<char>ch;
        for(auto it:st){
            ch.push_back(it);
        }
        unordered_map<char,char>umap;
        int i=0;
        int j=ch.size()-1;
        while(i<=j){
            umap[ch[i]]=ch[j];
            umap[ch[j]]=ch[i];
            i++;
            j--;
        }
        string ans="";
        for(auto it:temp){
            char r=umap[it];
            ans+=r;
        }
        cout<<ans<<endl;
    }
    return 0;
}