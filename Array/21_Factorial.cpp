#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define sc(x) scanf("%lld",&x)
#define pr(x) printf("%lld",x)

int main()
{
    int n;cin>>n;
    string s = "1";
    for(int i=2;i<=n;i++)
    {
        int carry=0;
        for(int j=s.size()-1;j>=0;j--)
        {
            int result = (s[j]-'0')*i+carry;
            int x = result%10;
            s[j]='0' + x;
            carry = result/10;
        }
        if(carry!=0)
        {
            string str = to_string(carry);
            s=str+s;
        }
    }
    cout<<s<<endl;
}