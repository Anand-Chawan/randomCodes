/*
Link: https://www.hackerearth.com/practice/algorithms/sorting/insertion-sort/practice-problems/algorithm/the-rise-of-the-weird-things-1/
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,e=0,o=0,ei=0,oi=0,i;
	cin>>n;
	int temp,even[n],odd[n];
	for(i=0;i<n;i++)
	{
		cin>>temp;
		if(temp%2==0)
		{
			e+=temp;
			even[ei]=temp;
			ei++;
		}
		else
		{
			o+=temp;
			odd[oi]=temp;
			oi++;
		}
	}
	sort(even,even+ei);
	sort(odd,odd+oi);
	for(i=0;i<ei;i++)
	cout<<even[i]<<" ";
	cout<<e<<" ";
	for(i=0;i<oi;i++)
	cout<<odd[i]<<" ";
	cout<<o;
}