#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define sc(x) scanf("%lld",&x)
#define pr(x) printf("%lld",x)

int maxProduct(vector<int> v)
{
    int n = v.size();
    int max_val = v[0];
    int min_val = v[0];

    int max_prod = v[0];

    for(int i=1;i<n;i++)
    {
        if(v[i]<0)
            swap(max_val,min_val);

        max_val = max(v[i],max_val * v[i]);
        min_val = min(v[i],min_val*v[i]);

        max_prod = max(max_prod,max_val);
    }

    return max_prod;
}

int main()
{
    vector<int> v{6,-3,-10,0,2};
    cout<<maxProduct(v);
}