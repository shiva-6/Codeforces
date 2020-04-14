#include<bits/stdc++.h>
using namespace std;

int tt;
#define ll long long

int main(){
    cin >> tt;
    while (tt--){
        int n, a, b;
        cin >> n >> a >> b;
        string ans = "";
        char ch = 'a';
        for(int i=0;i<b;i++) ans.push_back(ch + i);
        for(int j = 0; j < a-b; j++) ans.push_back(ch);
        int j =0;
        for(int i = a; i < n; i++){
            ans.push_back(ans[j]);
            j++;
        }
        cout<<ans<<endl;
    }
    return 0;
}