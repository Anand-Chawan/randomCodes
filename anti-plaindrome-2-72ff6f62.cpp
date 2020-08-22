#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   int t;cin>>t;while(t--){
        string a,b;
    cin>>a;
    sort(a.begin(),a.end());
    b=a;
    reverse(b.begin(),b.end());
    if(a==b) cout<<"-1\n";
    else cout<<a<<"\n";
   }
}