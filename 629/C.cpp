#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,n) for (int i=a;i<n;i++)
int tt;

int main(){
    // tt = 1;
    cin>>tt;
    while(tt--){
        int n;cin>>n;
        string x; cin>>x;
        string a="1",b="1";
        bool flag = false;
        rep(i,1,n){
            if(x[i] == '0'){
                a+="0";b+="0";
            }
            else if(x[i] == '1'){
                if(flag == false){
                    a+="1";b+="0";
                    flag = true;
                }
                else{
                    a+="0";b+="1";
                }
            }
            else{
                if(flag == false)
                {a+="1";b+="1";}
                else{
                    a+="0";b+="2";
                }
            }
        }
        cout<<a<<endl<<b<<endl;
    }
    return 0;
}