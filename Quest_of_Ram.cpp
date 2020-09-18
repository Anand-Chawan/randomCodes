/*
Hola SITians!! Here is where our contest begins.

The teacher gave Ram some sequence of letters containing x,y,z characters. Ram's work is to find out if the frequency of x,y,z becomes the same on removing exactly 1 character from the given string, and mention Yes or No as a response to his teacher. Help Ram to solve this challenge and make our Ram a perfect student.

Input Format

The first line of input contains an integer T denoting the no of test cases that is the number of words to be tested. Then T test cases follow. Each test case contains a string s.

Constraints

1 <= T <= 1000
1 <= length of strings <= 10000
Frequency of x,y,z >= 0
Output Format

For each test case in a new line print Yes if it's possible to make frequencies of all characters equal else print No.

Sample Input 0

2
xyyz
xxxxyyzz
Sample Output 0

Yes
No
Explanation 0

It is possible to make the frequency of each character the same just by removing a single character y from the first string. While, in the second string,it is not possible to make the frequency of each character the same just by removing at most one character from the above string.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ll t;cin>>t;while(t--){
        string s;
        int a=0,b=0,c=0;
        cin>>s;
        for(int i=0;s[i];i++){
            if(s[i]=='x') a++;
            else if(s[i]=='y') b++;
            else c++;
        }
        if(a==b) c-=a,a=0,b=0;
        else if(a==c) b-=a,a=0,c=0;
        else if(b==c) a-=b,b=0,c=0;
        if(a+b+c==1) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
