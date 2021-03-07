#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,n) for(int i=a;i<n;i++)
#define T int t;cin>>t;for(int ti=1;ti<=t;ti++)
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    T{
        string s;
        cin>>s;
        int cnt=0,f=0;
        loop(i,0,s.size()){
            if(s[i]=='1' && f==0){
                cnt++;
                f=1;
            }else if(s[i]=='0'){
                f=0;
            }
        }
        cout<<cnt<<"\n";
    }
}
/*https://www.codechef.com/MARCH21C/problems/GROUPS*/