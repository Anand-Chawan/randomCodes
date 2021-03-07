#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define print cout<<"Case #"<<ti<<": ";
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,h,x;
    cin>>n>>h>>x;
    int temp,f=0;
    while(n--){
        cin>>temp;
        if(h-temp<=x)   f=1;
    }
    if(f) cout<<"YES";
    else cout<<"NO";
}
/*https://www.codechef.com/MARCH21C/problems/NOTIME*/