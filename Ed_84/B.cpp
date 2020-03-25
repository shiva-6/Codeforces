#include<bits/stdc++.h>
using namespace std;

int tt;
int main(){
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<vector<int> > queens(n+1);
        unordered_set<int> king;
        unordered_set<int> queen;
        for(int i=1,k;i<=n;i++){
            cin>>k;
            for(int j=0,c;j<k;j++){
                cin>>c;
                queens[i].push_back(c);
            }
            king.insert(i);
            queen.insert(i);
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<queens[i].size();j++){
                if(king.find(queens[i][j]) != king.end()){
                    queen.erase(i);
                    king.erase(queens[i][j]);
                    break;
                }
            }
        }
        // cout<<king.size()<<endl;
        if(king.empty())
            cout<<"OPTIMAL"<<endl;
        else
            cout<<"IMPROVE"<<endl<<*queen.begin()<<" "<<*king.begin()<<endl;
    }
    return 0;
}