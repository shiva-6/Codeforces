#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,n) for (int i=a;i<n;i++)
int tt;

int main(){
    // tt = 1;
    cin>>tt;
    while(tt--){
        long long n, k;
        int x1,x2;
        cin>>n>>k;
        rep(i,1,n+1){
            if(k<=0){
                k+=i-2;
                x1 = i-1;
                break;
            }
            k-=i;
        } 
        x2 = k;
        string ans = "";
        for(int i=0;i<n;i++){
            if(i==x1 || i == x2)
                ans+="b";
            else ans += "a";
        }
        reverse(ans.begin(), ans.end());
        cout<<ans<<endl;
    }
    return 0;
}