#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;cin>>tc;
    while (tc--)
    {
        int n,m;cin>>n>>m;
        
        int p;
        unordered_set<int> s;
        for(int i=0;i<n;i++)
        {
            cin>>p;
            s.insert(p);
        }

        for(int i=0;i<m;i++)
        {
            cin>>p;
            s.insert(p);
        }

        cout<<s.size()<<endl;
    }
}