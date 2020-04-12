#include<bits/stdc++.h>
using namespace std;

int tt;
#define ll long long

int main(){
    cin>>tt;
    while(tt--){
        ll n;
        cin>>n;
        for(ll i=0,a,b;i<n;i++){
            cin>>a>>b;
            v.push_back({a,b});
        }
        float ans=-100;ll st;
        for(ll i=0;i<n;i++){
            ll j =i;
            ll d = -11;
            while(d <= 0){
                d = v[(j+1)%n].first - v[j].second;
                if(d <= 0)j++;
            }
        }
    }
    return 0;
}