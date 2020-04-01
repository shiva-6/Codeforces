#include<bits/stdc++.h>
using namespace std;

int tt;
vector<int> prime = {2,3,5,7,11,13,17,19,23,29,31}; 

int main(){
    cin>>tt;
    while (tt--){
        int n;
        cin>>n;
        vector<int> a(n);
        map<int, int> m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]] = 0;
        }
        map<int,int> m2;
        vector<int> count(11,0);
        for(int i = 0;i<n;i++){
            for(int j=0;j<prime.size();j++){
                if(a[i] % prime[j] == 0){
                    // s[j].insert(a[i])
                    m[a[i]] = j;
                    count[j]++;
                    break;
                }
            }
        }
        int cnt =1;
        for(int i = 0;i<11;i++){
            if(count[i] > 0){
                m2[i] = cnt;
                cnt++;
            }
        }
        cout<<cnt - 1<<endl;
        for(int i=0;i<n;i++){
            cout<<m2[m[a[i]]]<<" ";
        }
        cout<<endl;
    }
    return 0;
}