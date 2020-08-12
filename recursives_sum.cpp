/*
link: https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/recursive-sums/
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	ll t;cin>>t;while(t--){
		ll n,a,b,res=0,cnt=0;
		cin>>n;int temp=n;while(n--){
			cin>>a>>b;
			if(b) res=(res+(a*b)%9)%9;
			else cnt++;
		}
		if(cnt==temp) cout<<0<<"\n";
		else if(res%9==0)
		cout<<9<<"\n";
		else cout<<res%9<<"\n";
	}
}