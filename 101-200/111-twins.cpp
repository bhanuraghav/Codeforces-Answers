#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second

using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
  int n;
	cin>>n;
  vi a(n);
  ll sum =0;
  for(int i=0;i<n;i++){
    cin>>a[i];
    sum += a[i];
  }

  sort(all(a),greater<int>());

  //for(int i=0;i<n;i++)cout<<a[i]<<" ";

  sum/=2;
  ll gsum = 0;
  int i;
  for(i=0;i<n;i++){
    gsum += a[i];
    //cout<<gsum<<" "<<sum<<endl;
    if(gsum > sum)break;
  }
  cout<<i+1;
	return 0;
}
