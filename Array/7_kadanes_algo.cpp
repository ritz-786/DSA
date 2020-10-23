#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int tc;cin>>tc;
    while (tc--)
    {
        ll n;cin>>n;
        vector<ll> arr(n);

        for(ll i=0;i<n;i++)
            cin>>arr[i];

        ll cur_max,glob_max;
        cur_max=glob_max=arr[0];

        for(int i=1;i<n;i++)
        {
            cur_max = max(cur_max + arr[i],arr[i]);
            glob_max = max(cur_max,glob_max);
        }

        cout<<glob_max<<endl;
    }
}