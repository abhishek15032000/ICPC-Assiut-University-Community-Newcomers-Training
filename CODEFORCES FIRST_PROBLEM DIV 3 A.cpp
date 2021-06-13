#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve()
{
	ll size;
	cin>>size;
	vector<ll>v;
	for(int i=0;i<size;i++)
	{
		ll x;
		cin>>x;
		v.push_back(x);
	}
	auto index_smallest=min_element(v.begin(),v.end());
	auto index_largest=max_element(v.begin(),v.end());
	
	ll moves1=index_smallest-v.begin();
	ll moves3=index_largest-v.begin();

   cout<<min({max(moves1,moves3)+1,(size-1)-moves3+moves1+2,(size-1)-moves1+moves3+2,(size-1)-min(moves1,moves3)+1})<<"\n";
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		solve();
	}
}