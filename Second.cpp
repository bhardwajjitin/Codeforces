#include<bits/stdc++.h>
using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
    string temp;
    cin>>temp;
    set<char>st;
    
    for(auto it:temp){
        st.insert(it);
    }
    if(st.size()>1){
    cout<<"YES"<<endl;
    string s=temp;
    while(s==temp){
    int random=rand()%temp.size();
    int random1=rand()%temp.size();
    swap(s[random],s[random1]);
    }
    cout<<s<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
 }
 return 0;
}