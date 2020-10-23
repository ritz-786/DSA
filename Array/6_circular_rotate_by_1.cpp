#include<bits/stdc++.h>
using namespace std;

/*
    https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one/0
*/

int main()
{
    int tc;cin>>tc;
    while (tc--)
    {
        int n;cin>>n;
        vector<int> arr(n);

        for(int i=0;i<n;i++)
            cin>>arr[i];

        int k=1;
        vector<int> ans(n);
        for(int i=0;i<n;i++)
        {
            ans[(i+k)%n] = arr[i];
        }

        for(int x: ans)
            cout<<x<<" ";

        cout<<endl;
    }
}