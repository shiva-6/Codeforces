#include<bits/stdc++.h>
using namespace std;

int tt;
#define ll long long

int update(vector<int> &a, vector<int> &b, int x, int y){
    int ans_x = 0, ans_y = 0;
    for(auto it = a.begin(); it != a.end(); it++){
        if(*it >= x) ans_x += (*it - x + 1);
    }
    for(auto it = b.begin(); it != b.end(); it++){
        if(*it >= y) ans_y += (*it - y + 1);
    }
    // cout << ans_x * ans_y << endl;
    return ans_x * ans_y;
}

int main(){
    // cin >> tt;
    tt = 1;
    while (tt--){
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a; vector<int> b;
        int cnt = 0;
        for(int i = 0, x; i < n; i++){
            cin >> x;
            if(x) cnt++;
            else{
                if(cnt) a.push_back(cnt);
                cnt = 0;
            }
        }
        if(cnt) a.push_back(cnt);
        cnt = 0;
        for(int i = 0, x; i < m; i++){
            cin >> x;
            if(x) cnt++;
            else{
                if(cnt) b.push_back(cnt);
                cnt = 0;
            }
        }
        if(cnt) b.push_back(cnt);
        ll ans = 0;
        for(int i = 1; i * i <= k; i++){
            if(k % i == 0){
                ans += update(a, b, i, k/i);
                ans += update(a, b, k/i, i);
                if(i * i == k) ans -= update(a, b, k/i, i);
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}