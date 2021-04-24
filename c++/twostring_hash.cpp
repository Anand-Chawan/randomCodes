//https://www.hackerrank.com/challenges/two-strings/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dictionaries-hashmaps
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int a[26]={0},f=0;
        for(char i:s1) a[i-'a']++;
        for(char i:s2){
            if(a[i-'a']){
                cout<<"YES\n";
                f=1;
                break;
            }
        }
        if(!f) cout<<"NO\n";
    }
}