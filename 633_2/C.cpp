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
            for(ll i = 0; i < n; i++) cin >> a[i];
            ll val = 0;
            for(ll i = 1; i < n; i++){
                if(a[i] < a[i-1]){
                    val = max(val, (a[i-1] - a[i]));
                    a[i] = a[i-1];
                }
            }
            ll ans = 0;
            while(val > 0){
                val /= 2;ans++;
            }
            cout<<ans<<endl;
        }
        return 0;
    }