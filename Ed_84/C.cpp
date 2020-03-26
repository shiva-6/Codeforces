#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,n) for (int i=a;i<n;i++)
int tt;

int main(){
    tt = 1;
    // cin>>tt;
    while(tt--){
        int n, m, k;
        cin>>n>>m>>k;
        string ans = "";
        rep(i,0,m-1) ans.push_back('L');
	    rep(i,0,n-1) ans.push_back('U');
	    rep(i,0,n) {
            if (i%2==0) {
                rep(j,0,m-1) ans.push_back('R');
            } else {
                rep(j,0,m-1) ans.push_back('L');
            }
		    if (i!=n-1) ans.push_back('D');
	    }
        cout<<ans.size()<<endl;
        cout<<ans<<endl;
    }
    return 0;
}