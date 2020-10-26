#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define sc(x) scanf("%lld",&x)
#define pr(x) printf("%lld",x)

bool isSubset(vector<int> arr1,vector<int> arr2,int m,int n)
{
    unordered_map<int,int> ma;
    for(int i=0;i<m;i++)
    {
        ma[arr1[i]]+=1;
    }

    for(int j=0;j<n;j++)
    {
        if(ma[arr2[j]] == 0)
        {
            return false;
        }
        ma[arr2[j]]-=1;
    }
    return true;
}

int main()
{
    int tc;cin>>tc;
    while(tc--)
    {
        int m,n;
        cin>>m>>n;
        vector<int> arr1(m),arr2(n);
        
        for(int i=0;i<m;i++)
            cin>>arr1[i];

        for(int j=0;j<n;j++)
            cin>>arr2[j];    

        cout<<(isSubset(arr1,arr2,m,n) ? "Yes" : "No")<<endl;
    }
}