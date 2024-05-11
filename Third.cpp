#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        
        set<int>firsthalf;
        set<int>secondhalf;
        int temp=a;
        while(temp!=b){
            firsthalf.insert(temp);
            temp++;
            temp=temp%12;
            if(temp==0){
                temp=12;
            }
        }
        firsthalf.insert(a);
        firsthalf.insert(b);
        temp=b;
        while(temp!=a){
            secondhalf.insert(temp);
            temp++;
            temp=temp%12;
            if(temp==0){
                temp=12;
            }
        }
        secondhalf.insert(b);
        secondhalf.insert(a);
        if(firsthalf.find(c)!=firsthalf.end() && secondhalf.find(d)!=secondhalf.end()){
            cout<<"YES"<<endl;
        }
        else if(firsthalf.find(d)!=firsthalf.end() && secondhalf.find(c)!=secondhalf.end()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}