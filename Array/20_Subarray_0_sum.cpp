#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define sc(x) scanf("%lld",&x)
#define pr(x) printf("%lld",x)

bool poss(vector<int> arr,int k)
{
    int n = arr.size();
    unordered_map<int,int> m;
    int count=0;
    int upto = 0;
    for(int i=0;i<n;i++)
    {
        upto += arr[i];
        if(upto == k)
            return true;
        int rem = upto - k;
        if(m.find(rem)!=m.end())
            return true;
        m[upto]=1;
    }
    return false;
}

int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        int n;cin>>n;
        vector<int> arr(n,0);
        for(int i=0;i<n;i++)
            cin>>arr[i];

        if(poss(arr,0))
            cout<<"Yes"<<endl;
        else    
            cout<<"No"<<endl;
    }
}