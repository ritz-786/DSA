#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define sc(x) scanf("%lld",&x)
#define pr(x) printf("%lld",x)

// https://leetcode.com/problems/merge-intervals/

bool comp(vector<int> &a,vector<int> &b)
{
    if(a[0] < b[0])
        return true;
    else if(a[0] == b[0])
        return a[1] < b[1];
    return false;
}

vector<vector<int>> merge(vector<vector<int>>& intervals) 
{
    sort(intervals.begin(),intervals.end(),comp);

    vector<vector<int>> ans;
    ans.push_back(intervals[0]);
    int cnt =0 ;
    for(int i=1;i<intervals.size();i++)
    {
        if(intervals[i][0]>=ans[cnt][0] && ans[cnt][1]>=intervals[i][0]){
            ans[cnt] = {min(intervals[i][0],ans[cnt][0]),max(intervals[i][1],ans[cnt][1])};
        }else{
            ans.push_back(intervals[i]);
            cnt++;
        }
    }

    return ans;
}

int main()
{
    vector<vector<int>> intervals{{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> ans = merge(intervals);

    for(vector<int> x: ans){
        cout<<x[0]<<" "<<x[1]<<endl;
    }
}