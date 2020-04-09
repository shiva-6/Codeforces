#include<bits/stdc++.h>
using namespace std;

int tt;

vector<string> even(int n, int m){
    string a = "";
    for(int i=0;i<m;i++){
        if(i%2 ==0) a+="W";
        else a+="B";
    }
    vector<string> ans(n);
    for(int i=0;i<n-1;i++)
        ans[i] = a;
    a="";
    for(int i=0;i<m-2;i++){
        if(i%2 ==0) a+="W";
        else a+="B";
    }
    a+="BB";
    ans[n-1] = a;
    return ans;
}

vector<string> odd(int n, int m){
    string a = "",b = "";
    for(int i=0;i<m;i++){
        if(i%2 ==0) {a+="W", b+="B";}
        else {a+="B", b+="W";}
    }
    vector<string> ans(n);
    for(int i=0;i<n;i++){
        if(i%2 == 0) ans[i] = b;
        else ans[i] = a;
    }
    return ans;
}

int main(){
    cin>>tt;
    while(tt--){
        int n,m;
        cin>>n>>m;
        vector<string> ans;
        if(n%2 == 0 && m%2 == 0)
            ans = even(n,m);
        else if(n%2 == 1 && m%2 == 1)
            ans = odd(n,m);
        else if(n%2 == 1 && m%2 == 0){
            ans = even(n-1, m);
            string a="";
            for(int i=0;i<m;i++){
                if(i%2 == 0) a += "W";
                else a += "B";
            }
            ans.push_back(a);
        }
        else{
            ans = even(n, m-1);
            for(int i=0;i<n;i++){
                if(i%2 == 0) ans[i] += "W";
                else ans[i] += "B";
            }
        }
        for(int i=0;i<n;i++)
            cout<<ans[i]<<endl;
    }
    return 0;
}