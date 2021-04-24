//https://www.hackerrank.com/challenges/ctci-ransom-note/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dictionaries-hashmaps
#include<bits/stdc++.h>
using namespace std;
int main(){
    int l1,l2;
    cin>>l1>>l2;
    map<string,int> a,b;
    string s;
    while(l1--){
        cin>>s;
        a[s]+=1;
    }
    while(l2--){
        cin>>s;
        b[s]+=1;
    }
    for(auto i:b){
        if(a.find(i.first)==a.end()){
            cout<<"No";
            return 0;
        }else{
            if(a[i.first]-i.second<0){
                cout<<"No";
                return 0;
            }
        }
    }
    cout<<"Yes";
}