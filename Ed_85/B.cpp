#include<bits/stdc++.h>
using namespace std;

int tt;

int main(){
    cin>>tt;
    while(tt--){
        int n,x;cin>>n>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.rbegin(), a.rend());
        float ans = 0,cnt=1,i;
        if(a[0] < x) {cout<<0<<endl;continue;}
        for(i=0;i<n;i++){
            ans += a[i];
            // cout<<(float)ans/(float)(i+1)<<endl  ;
            if(ans/cnt < (float)x){
                ans -= a[i];
                ans /= cnt - 1;
                cnt = 2;ans+=a[i];
                if(ans/cnt < (float)x)
                    break;
            }
            cnt++;
        }
        cout<<i<<endl;
    }
    return 0;
}