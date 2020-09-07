#include<bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(int i=a;i<b;i++)
int ncr(int n,int r){
    int res=1;
    if(r>n-r) r=n-r;
    loop(i,0,r) res*=(n-i),res/=(i+1);
    return res;
}
int main(){
    int n;
    cin>>n;
    loop(i,0,n){
        loop(j,0,i+1){
            cout<<ncr(i,j)<<" ";
        }
        cout<<"\n";
    }
}