#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i,a,b) for(i=a;i<b;i++)
#define T ll t;cin>>t; for(ll ti=0;ti<t;ti++)
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	T{
		ll n; cin>>n;
		ll a[n],i,cnt=1,mx=1;
		cin>>a[0];
		loop(i,1,n){
			cin>>a[i];
			a[i-1]=a[i]-a[i-1];
			if(a[i-1]==a[i-2]){
				cnt++;
				mx=max(mx,cnt);
			}
			else{
				cnt=1;
			}
		}
		cout<<"Case #"<<ti+1<<": "<<mx+1<<"\n";
	}
}