#include<bits/stdc++.h>
using namespace std;

int tt;
#define ll long long

int main(){
    cin >> tt;
    while (tt--){
        set<int> a,b;
        for(int i=0;i<9;i++){
            a.insert(i);b.insert(i);
        }
        vector<vector<int> > v(9, vector<int> (9, 0));
        for(int i=0;i<9;i++){
            string str;
            cin >> str;
            for(int j=0;j<9;j++){
                v[i][j] = str[0] - '0';
            }
        }
        set<int> c;c.insert(1);c.insert(2);
        int tp = v[0][0];a.erase(0);b.erase(0);
        for(int i=1;i<9;i++){
            if(i%3 == 0){
                c.insert(0);c.insert(1);c.insert(2);
            }
            for(auto j = b.begin(); j != b.end(); j++){
                int x = *j;
                if((v[i][x] != tp) && (c.find(x/3) != c.end())){
                    v[i][x] = tp;
                    tp = v[i][x];
                    c.erase(x/3);
                    b.erase(x);
                    break;
                }
            }
        }
        v[0][0] = tp;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++)
                cout<<v[i][j];
            cout<<endl;
        }
    }
    return 0;
}