//https://www.hackerrank.com/challenges/crush/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,q,x,y,z,mx=0,ans=0;
    cin>>n>>q;
    vector<ll> a(n);
    while(q--){
        cin>>x>>y>>z;
        a[x-1]+=z;
        if(y!=n) a[y]-=z;
    }
    for(ll i:a) ans+=i,mx=max(mx,ans);
    cout<<mx;
}