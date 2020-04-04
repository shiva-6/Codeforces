#include<bits/stdc++.h>
using namespace std;

int tt;
int a[1000000];

int main(){
    cin>>tt;
    // tt = 1;
    a[0] =0;
    for(int i=1;i<1000000;i++)
        a[i] = a[i-1] + i;
    while(tt--){
        int n;
        cin>>n;
        vector<int> in(n);
        for(int i=0;i<n;i++)
            cin>>in[i];
        vector<pair<int,int> > front(n);set<int> f;set<int> b;
        vector<pair<int, int> > back(n);
        front[0].first = in[0];back[n-1].first = 0;f.insert(in[0]);
        front[0].second = f.size();back[n-1].second = 0;
        for(int i=1;i<n;i++){
            f.insert(in[i]);b.insert(in[n-i]);
            front[i].first = front[i-1].first + in[i];front[i].second = f.size();
            back[n-1-i].first = back[n-i].first + in[n-i];back[n-1-i].second = b.size();
        }
        int ans = 0;
        vector<pair<int, int> > res;
        
        for(int i=0;i<n-1;i++){
            // cout<<front[i].first<<" "<<front[i].second<<" "<<back[i].first<<" "<<back[i].second<<endl;
            if(front[i].first == a[i+1] && back[i].first == a[n-1-i] && front[i].second == (i+1) && back[i].second == (n-1-i)) {
                ans++;
                res.push_back({i+1,n-1-i});
            }
        }
        cout<<ans<<endl;
        for(int i = 0;i<ans;i++){
            cout<<res[i].first<<" "<<res[i].second<<endl;
        }
    }
    return 0;
}