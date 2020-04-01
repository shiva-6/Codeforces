#include<bits/stdc++.h>
using namespace std;

int tt;

int main(){
    cin>>tt;
    while (tt--){
        int n,k;
        cin>>n>>k;
        string a;
        cin>>a;
        vector<vector<int> > p(k, vector<int> (26, 0));
        int j=0;
        for(int i=0;i<n;i++){
            if(j>=k)
                j = 0;
            p[j][(int)a[i] - (int)'a']++;
            j++;
        }
        int ans = 0;
        for(int i=0;i<k/2;i++){
            int maxm = -1;
            for(int j =0;j<26;j++)
                maxm = max(p[i][j]+p[k-1-i][j], maxm);
            ans += 2*(n/k) - maxm;
        }
        // cout<<ans<<endl;
        if(k % 2 !=0){
            int maxm = -1;
            for(int j =0;j<26;j++){
                maxm = max(p[k/2][j], maxm);
            }
            ans += ((n/k) - maxm); 
        }
        cout<<ans<<endl;

    }
    return 0;
}