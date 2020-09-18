/*
Here comes your last challenge!!!

Rajiv has given two numbers A and Z, now Sanjay who is the brother of Rajiv has been assigned to this work. Now the task is ,numbers from one(1) to A has to be divided into two equal or unequal 'Carve ups'(sets) such that the absolute difference between the aggregates generated from both sets is Z and that's not all, Sanjay has been asked to satisfy another condition which is the 'Greatest common divisor(GCD)' of the aggregates generated from these 'carve ups' should be 1. (i.e. Summation generated from both sets are co-prime).

Input Format

T denotes the number of test cases, A and Z denote the range for respective test cases.

Constraints

0 < T<= 100
0 < A<= 1000
0 < Z<= 1000
Output Format

"YES" or "NO" for each case.

Sample Input 0

2
5 7
2 7
Sample Output 0

YES
NO
Explanation 0

As numbers from 1 to 5 can be divided into two sets {1, 2, 3, 5} and {4} such that absolute difference between the sum of both sets is 11 – 4 = 7 which is equal to M and also GCD(11, 4) = 1. Hence the output is "YES". Whereas {1,2} cannot be divided into 2 carveups that satisfy the given conditions.Hence the output is "NO".
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define gcd(a,b) __gcd(a,b)

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int a,b,sum=0,set1=0,set2=0;
        cin>>a>>b;
        sum=a*(a+1)/2;
        set1=(sum+b)/2;
        set2=sum-set1;
        if(sum<b){
            cout<<"NO\n";
            continue;
        }
        else if(set1+set2==sum&&set1-set2==b&&gcd(set1,set2)==1){
             cout<<"YES\n";
            continue;
        }
        else cout<<"NO\n";
        
    }
    return 0;
}
