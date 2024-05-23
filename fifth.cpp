#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;
        vector<long long>dist,time,query;
        int temp=k;
        while(temp--){
            int a;
            cin>>a;
            dist.push_back(a);
        }
        temp=k;
        while(temp--){
            int b;
            cin>>b;
            time.push_back(b);
        }

        while(q--){
            int res;
            cin>>res;
            query.push_back(res);
        }
        vector<double>slots;
        long long st=0;
        long long sttime=0;
        for(int i=0;i<dist.size();i++){
            long long dis=dist[i]-st;
            st=dist[i];
            long long times=time[i]-sttime;
            sttime=time[i];
            double temp=(double)dis/(double)times;
            slots.push_back(temp);
        }

        for(int i=0;i<query.size();i++){
            long long pos=query[i];
            bool flag=false;
            if(pos<=dist[0]){
                long long temp=pos/slots[0];
                cout<<temp<<" ";
                flag=true;
            }
            int low=0;
            int high=dist.size()-1;
            int ans=-1;
            while(low<=high && flag==false){
                int mid=low+(high-low)/2;
                if(dist[mid]==pos){
                    cout<<time[mid]<<" ";
                    flag=true;
                }
                if(dist[mid]<pos){
                    ans=mid;
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            if(flag==false){
            long long remaining_distance = pos - dist[ans];
            long long jitin = time[ans] + ceil(remaining_distance / slots[ans]);
            cout<<jitin<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}