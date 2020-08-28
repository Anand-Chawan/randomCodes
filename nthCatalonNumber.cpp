#include<iostream>
using namespace std;
#define ll long long
#define loop(i,a,b) for(int i=a;i<b;i++)
int main(){
    ll n,ans=1;
    cin>>n;
    loop(i,2,n+1) ans=ans*2*(2*i-1)/(i+1);
    cout<<ans;
}