#include<bits/stdc++.h>
using namespace std;

int tt;

int main(){
    tt = 1;
    // cin >> tt;
    while( tt-- ){
        int n;cin>>n;
        vector<pair<int, int> > deg(n+1,{0,0});
        vector<pair<int, int> >inp(n+1);
        for(int i=0,x,y;i<n-1;i++){
            cin>>x>>y;
            deg[x].first++;deg[x].second = x;
            deg[y].first++;deg[y].second = y;
            inp[i] = make_pair(x, y);
        }
        sort(deg.begin(), deg.end());
        auto p = *(deg.end() - 1);
        // cout<<p.first<<endl;
        int cnt = p.first, cnt2 = 0;
        int check = p.second;
        for(int i=0, ans;i<n-1;i++){
            if(inp[i].first == check || inp[i].second == check){
                ans = cnt2;
                cnt2++;
            }
            else{
                ans = cnt;
                cnt++;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}