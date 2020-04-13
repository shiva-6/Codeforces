#include<bits/stdc++.h>
using namespace std;

int tt;
#define ll long long

int main(){
    cin>>tt;
    while(tt--){
        int n; cin >> n;
        vector<int> a(n);
        bool odd = false, even = false;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i]%2) odd = true;
            else even = true;
        }
        if(odd ^ even) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}