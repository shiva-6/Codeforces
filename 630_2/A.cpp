#include<bits/stdc++.h>
using namespace std;

int tt;

int main(){
    cin>>tt;
    while (tt--){
        long long a,b,c,d,x,y,x1,y1,x2,y2;
        bool flag1=false, flag2=false;
        cin>>a>>b>>c>>d>>x>>y>>x1>>y1>>x2>>y2;
        if(x-a+b >= x1  && x-a+b <= x2){
            if((a+b > 0) &&  (x2-x1 == 0))
                flag1 = false;
            else
                flag1 = true;
        }
        if(y-c+d >= y1  && y-c+d <= y2){
            if((c+d > 0) &&  (y2-y1 == 0))
                flag2 = false;
            else
                flag2 = true;
        }         
        if(flag1 & flag2)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}