#include<bits/stdc++.h>
using namespace std;

int tt;
int main(){
    cin>>tt;
    while(tt--){
        int n, m, k;
        cin>>n>>m>>k;
        vector<pair<int, int> > p(k+1);
        vector<pair<int, int> > q(k+1);
        for(int i=1,x,y;i<=k;i++){
            cin>>x>>y;
            p[i].push_back({x,y});
        }
        for(int i=1,x,y;i<=k;i++){
            cin>>x>>y;
            q[i].push_back({x,y});
        }
        vector<pair<int, int> > s(k+1, {-1, -1});
        int i=1;
        for(i; i<=k; i++){
            int a = q[i].first - p[i].first;
            int b = q[i].second - p[i].second;
            int l = abs(a)+abs(b);
            if(s[l].first != -1){
                if(s[l].first != a | s[l].second != b)
                    break;
            }
            else{
                s[l].first = a;
                s[l].second = b;
            }
        }
        if(i<=k)
            cout<<-1<<endl;

        bool flag = true;
        else{
            int a=0,b=0;
            for(int i =1;i<= k; i++){
                if(s[i] != -1){
                    if((s[i].first< 0 & a<0) | (s[i].first>0 & a>0) | (a==0)){
                        if(abs(s[i].first) < abs(a)){
                            cout<<-1<<endl;
                            flag = false;
                            break;
                        }
                        else
                            a = s[i].first;
                    }
                    else{
                        cout<<-1<<endl;
                        flag = false;
                        break;
                    }
                    if((s[i].second< 0 & b<0) | (s[i].second>0 & b>0) | (b==0)){
                        if(abs(s[i].second) < abs(b)){
                            cout<<-1<<endl;
                            flag = false;
                            break;
                        }
                        else
                            b = s[i].second;
                    }
                    else{
                        cout<<-1<<endl;
                        flag = false;
                        break;
                    }

                }
            }
            string ans = "";
            int a =0,b =0;
            if(flag == true){
                for(int i = 1;i<=k ;i++){
                    if(s[i].first != -1){
                        int l = s[i].first - a;
                        int r = s[i].second - b;
                        for(int j = 0;j<abs(l);j++){
                            if(l<0)
                                ans+="L";
                            else if(l>0)
                                ans+="R";
                        }
                        for(int j = 0;j<abs(r);j++){
                            if(r<0)
                                ans+="D";
                            else if(l>0)
                                ans+="U";
                        }
                    }
                }
                cout<<ans.size()<<endl<<ans<<endl;
            }
        }
    }
    return 0;
}