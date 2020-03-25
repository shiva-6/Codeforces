#include<bits/stdc++.h>
using namespace std;

int tt;
int main(){
    cin>>tt;
    while(tt--){
        long long n,k;
        cin>>n>>k;
        if(k*k <= n & (n-k*k)%2 == 0)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }
    return 0;
}