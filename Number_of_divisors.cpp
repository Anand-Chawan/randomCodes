/*
Link: https://www.hackerearth.com/problem/algorithm/number-of-divisors-5/editorial/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define T ll t;cin>>t; for(ll ti=0;ti<t;ti++)
void solve(ll n) { 
	int cnt=0;
    for (ll i=1;i<=sqrt(n);i++) { 
        if (n%i==0){ 
            if (n/i == i) cnt++;
            else cnt+=2; 
        } 
    } 
	cout<<cnt<<"\n";
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	T{
		ll n;
		cin>>n;
		solve(n);
	}
}