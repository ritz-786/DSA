#include <bits/stdc++.h>
using namespace std;

#define ll long long int

// https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0

int main()
{
  ll tc;cin>>tc;
  while(tc--)
  {
    ll n;
    cin >> n;
    ll a[n];
    for(ll i=0;i<n;i++){
      cin>>a[i];
    }

    ll glob_max = a[0];
    ll cur_max = a[0];

    for(ll i=1;i<n;i++)
    {
      cur_max = max(cur_max+a[i],a[i]);
      if(cur_max > glob_max){
        glob_max = cur_max;
      }
    }

    cout<<glob_max<<endl;
  }
}
