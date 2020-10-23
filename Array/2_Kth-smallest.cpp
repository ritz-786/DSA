#include <bits/stdc++.h>
using namespace std;

#define sc(x) scanf("%lld", &x)
#define pr(x) printf("%lld\n", x)

#define ll long long int

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        sc(n);

        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            sc(arr[i]);
        }

        // creating a max-heap
        priority_queue<ll> pq;

        ll k;
        sc(k);

        for (ll i = 0; i < n; i++)
        {
            pq.push(arr[i]);
            if (pq.size() > k)
                pq.pop();
        }

        pr(pq.top());
    }
}
