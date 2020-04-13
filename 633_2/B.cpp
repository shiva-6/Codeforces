#include<bits/stdc++.h>
using namespace std;

int tt;
#define ll long long

int main(){
    cin>>tt;
    while(tt--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        sort(a.begin(), a.end());

        ll it = n/2;
        for(ll i=0;i<n;i++){
            if(i%2 == 0){
                cout<<a[it+i]<<" ";
                it += i;
            }
            else{
                cout<<a[it-i]<<" ";
                it -= i;
            }
        }
        cout<<endl;
    }
    return 0;
}