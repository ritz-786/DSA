#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define sc(x) scanf("%lld",&x)
#define pr(x) printf("%lld",x)

int main()
{
    int n;cin>>n;
    int k;cin>>k;

    vector<int> v(n,0);
    for(int i=0;i<n;i++)
        cin>>v[i];

    unordered_map<int,int> m;
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        int rem = k - v[i];
        if(m.find(rem)!=m.end())
            cnt+=m[rem];

        m[v[i]]+=1;
    }
    cout<<cnt;
}