#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define sc(x) scanf("%lld",&x)
#define pr(x) printf("%lld",x)

int main()
{
    int n;cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++)
        cin>>arr[i];

    multiset<int> s;// 2 4 1 3 5
    int cnt =0;
    for(int i=0;i<n;i++)
    {
        if(s.empty())
            s.insert(arr[i]);
        else
        {
            auto it = s.upper_bound(arr[i]);
            cnt += distance(it,s.end());
            s.insert(arr[i]);
        }
    }
    cout<<cnt;
}