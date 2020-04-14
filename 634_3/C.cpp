#include<bits/stdc++.h>
using namespace std;

int tt;
#define ll long long
const int len = 200000;

int main(){
    cin >> tt;
    while (tt--){
        int n;
        cin >> n;
        map<int, int> a;
        int mx = 0;
        for(int i=0; i < n; i++){
            int b;
            cin >> b;
            if(a.find(b) != a.end()) a[b]++;
            else a[b] = 1;
            mx = max(mx, a[b]);
        }
        int ln = a.size();
        if( ln > mx) cout<<mx<<endl;
        else if(ln == mx) cout<<(ln - 1)<<endl;
        else cout<<ln<<endl;
    }
    return 0;
}