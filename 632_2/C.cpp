#include<bits/stdc++.h>
using namespace std;

int tt;

int main(){
    tt = 1;
    while(tt--){
        long long n; cin>>n;
        vector<long long> a;
        unordered_set<long long> s;
        map<long long , vector<long long> > m;
        for(long long i=0;i<n;i++) cin>>a[i];
        long long ans = (n*(n+1))/2;
        // long long cnt = 0;
        long long sum = 0;s.insert(0);m[0].push_back(-1);
        for(int i=0;i<n;i++){
            sum += a[i];
            if(s.find(sum) != s.end()){
                auto v 
                for(int j =0;j<m[sum].size();j++){
                    ans-=(n-i)*(v[j] + 1);
                }
            }
            s.insert(sum);m[sum].push_back(i);
        }
        // ans -= cnt;
        cout<<ans<<endl;
    }
    return 0;
}