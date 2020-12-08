#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;while(t--){
        ll a,b,xe,xo,ye,yo,cnt=0;
        cin>>a>>b;
        xe=(a-2)/2+1;
        ye=(b-2)/2+1;
        xo=(a-1)/2+1;
        yo=(b-1)/2+1;
        if(a==1) xe=0,xo=1;
        if(b==1) ye=0,yo=1;
        cnt=(xe*ye)+(xo*yo);
        cout<<cnt<<"\n";
    }
}
/*link: https://www.codechef.com/DEC20B/problems/EVENPSUM*/