#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define sc(x) scanf("%lld",&x)
#define pr(x) printf("%lld",x)

// find duplicate in an array of N+1 Integers

int main()
{
    int n;cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++)
        cin>>v[i];

    if(n<=1)
    {
        cout<<-1<<endl;
        return 0;
    }

    int slow=v[0],fast=v[v[0]];

    while(slow!=fast)
    {
        slow = v[slow];
        fast = v[v[fast]];
    }

    fast=0;
    while (slow!=fast)
    {
        slow = v[slow];
        fast = v[fast];
    }
    
    cout<<slow;
}