#include<bits/stdc++.h>
using namespace std;

int tt;
#define ll long long

int main(){
    cin >> tt;
    while (tt--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> ans;
        vector<int> ans1;
        for(int i = 0; i < n; i++) cin >> a[i];

        for( int i = 0;i < n ;i++){
            if(a[i] % 2 == 0){
                ans.push_back(i+1);
                break;
            }
            ans1.push_back(i+1);
            if(ans1.size() >= 2){
                ans = ans1;
                break;
            }
        }
        if(ans.size() == 0) cout<<-1<<endl;
        else
        {
            cout<<ans.size()<<endl;
            for(int i = 0; i < ans.size(); i++)
                cout<<ans[i]<<" ";
            cout<<endl;
        }
        
    }
    return 0;
}