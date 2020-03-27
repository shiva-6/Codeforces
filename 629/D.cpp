#include<bits/stdc++.h>
using namespace std;

int tt;

int main(){
    // tt = 1;
    cin>>tt;
    while(tt--){
        int n;cin>>n;
        vector<int> type(n);
        rep(i,0,n) cin>>type[i];
        bool eq = true;
        rep(i,1,n) 
            if(type[i] != type[i-1]) eq = false;
        
        if(eq == true){
            cout<<1<<endl;
            rep(i,0,n) cout<<1<<" ";
            cout<<endl;
            continue;
        }
        if(n%2 == 0){
            cout<<2<<endl;
            rep(i,0,n){
                if(i%2 == 0) cout<<1<<" ";
                else cout<<2<<" ";
            }
            cout<<endl;
            continue;
        }
        vector<int> ans(n);
        ans[0] =1;
        int ret = 1;
        for(int i=1;i<n;i++){
            if(type[i] == type[i-1])
                ans[i] = ans[i-1];
            else{
                ret = 2;
                if(ans[i-1] == 1)
                    ans[i] = 2;
                else ans[i] = 1;
            }
        }
        if((ans[n-1] == ans[0])  && (type[n-1] != type[0])){
            cout<<"shiva"<<endl;
            bool tip = false;
            int i=1;
            for(i;i<n;i++){
                if(ans[i] == ans[i-1]){
                    tip = true; break;
                }
            }
            if(tip == true){
                for(int j=i;j<n;j++){
                    if(ans[j] == 1)
                        ans[j] = 2;
                    else    ans[j] = 1;
                }
            }
            else{
                i = n-1;
                while(type[i] == type[n-1]){
                    ans[i] = 3; i--;
                }
                ret = 3;
            }
        }
        cout<<ret<<endl;
        rep(i,0,n) cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}