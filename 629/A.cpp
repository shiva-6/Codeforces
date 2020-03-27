#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,n) for (int i=a;i<n;i++)
int tt;

int main(){
    // tt = 1;
    cin>>tt;
    while(tt--){
        long long a, b;
        cin>>a>>b;
        if(a%b == 0)
            cout<<0<<endl;
        else
        cout<<b-(a%b)<<endl;
    }
    return 0;
}