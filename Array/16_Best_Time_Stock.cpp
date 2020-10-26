#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define sc(x) scanf("%lld",&x)
#define pr(x) printf("%lld",x)

int maxProfit(vector<int>& prices) {
    int n = prices.size();
    if(n==0)
        return 0;
    int minPrice;

    int max_prof = 0;
    minPrice=prices[0];
    for(int i=1;i<n;i++)
    {
        max_prof = max(max_prof,prices[i] - minPrice);
        minPrice = min(minPrice,prices[i]);
    }

    return max_prof;
}

int main()
{
    vector<int> v{7,1,5,6,3,4};
    cout<<maxProfit(v);
}