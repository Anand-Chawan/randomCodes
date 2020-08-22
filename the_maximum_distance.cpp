#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i,a,b) for(i=a;i<b;i++) 
void first(ll a[],ll n,ll l,ll r,ll x){
	ll i;
	loop(i,l-1,r){
		a[i]+=x;
	}
}
void second(ll a[],ll n,ll l,ll r,ll x){
	ll i;
	loop(i,l-1,r){
		a[i]*=x;
	}
}
void third(ll a[],ll n,ll x){
	ll start=0,end=n-1;
	while(1){
		while(a[start]!=x&&start<=end) start++;
		while(a[end]!=x&&end>=start) end--;
		break;
	}
	if(a[start]!=x) cout<<-1<<"\n";
	else cout<<(end-start+1)<<"\n";
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	ll n;cin>>n;
	ll a[n],i;
	loop(i,0,n){
		 cin>>a[i];
	}
	ll q;
	cin>>q;
	while(q--){
		ll check,l,r,x;
		cin>>check;
		if(check==1){
			cin>>l>>r>>x;
			first(a,n,l,r,x);
		}
		else if(check==2){
			cin>>l>>r>>x;
			second(a,n,l,r,x);
		}
		else{
			cin>>x;
			third(a,n,x);
		}
	}
}