#include<bits/stdc++.h>
using namespace std;

int tt; 

int main(){
    cin>>tt;
    while(tt--){
        int len;
        cin >> len;
        vector<int> a(len);
        vector<int> b(len);
        vector<int> cnt(3,0);
        for(int i=0;i<len;i++){
            cin >> a[i];
            cnt[a[i] + 1]++;
        }
        for(int i=0;i<len;i++) cin>>b[i];
        int i;
        for(i=len-1;i>=0;i--){
            cnt[a[i]+1]--;
            int p = b[i] - a[i];
            if(p<0 && cnt[0]<=0) break;
            if(p>0 && cnt[2]<=0) break;
        }
        if(i>=0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
    return 0;
}