#include<bits/stdc++.h>
using namespace std;

int tt;

int main(){
    cin>>tt;
    while(tt--){
        int n; cin>>n;
        vector<pair<int, int> > v;
        for(int i=0,x,y;i<n;i++){
            cin >> x>>y;
            v.push_back(make_pair(x,y));
        } 
        if(v[0].second > v[0].first){
            cout<<"no"<<endl;continue;
        }
        int i=1;
        for(i;i<n;i++){
            if((v[i].first < v[i-1].first) || (v[i].first < v[i].second) || (v[i].second < v[i-1].second)) 
                break;
            if(v[i].first == v[i-1].first && v[i].second != v[i-1].second) break;
        }
        if(i == n) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}