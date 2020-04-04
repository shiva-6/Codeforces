#include<bits/stdc++.h>
using namespace std;

int tt;

int main(){
    cin>>tt;
    // tt = 1;
    while(tt--){
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i =0;i<n;i++)
            cin>>a[i];
        set<int> s(a.begin(), a.end());
        int j = 1,count = 0;
        for(auto i = s.begin();i != s.end(); i++){
            while(count<x && *i != j){
                count++;
                j++;
            }
            if(*i == j) j++;
            if(count >= x)
                break;
        }
        // cout<<j<<endl;
        cout<<j-1+x-count<<endl;
    }
    return 0;
}