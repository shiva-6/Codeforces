#include<bits/stdc++.h>
using namespace std;

int tt;

int main(){
    // tt = 1;
    cin >> tt;
    while( tt-- ){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        set<int> s(a.begin(), a.end());
        cout<<s.size()<<endl;
    }
    return 0;
}