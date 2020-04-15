#include<bits/stdc++.h>
using namespace std;

int tt;
#define ll long long

int main(){
    tt = 1;
    while (tt--){
        int n;
        cin >> n;
        int ans = 0, val = 0;
        string str; cin >> str;
        stack<pair<char, int> > s;
        for(int i = 0; i < str.size(); i++){
            char a = str[i];
            if(s.empty()){
                ans += val;
                val = 0;
                s.push(make_pair(a, i));
                continue;
            }
            if(a == ')'){
                auto q = s.top();
                if(q.first == '(') s.pop();
                else s.push(make_pair(a, i));
            }
            else{
                auto q = s.top();
                if(q.first == ')'){
                    s.pop();
                    val = i - q.second + 1;
                }
                else s.push(make_pair(a, i));
            }
        }
        ans += val;
        if(!s.empty()) cout << -1 << endl;
        else cout << ans << endl;
    }
    return 0;
}