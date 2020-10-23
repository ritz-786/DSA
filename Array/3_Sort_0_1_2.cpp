#include <bits/stdc++.h>
using namespace std;
#define sc(x) scanf("%d", &x)
#define pr(x) printf("%d", x)

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int l = 0, m = 0, h = n - 1;
        while (m <= h)
        {
            if (arr[m] == 0)
            {
                swap(arr[l], arr[m]);
                l++;
                m++;
            }
            else if (arr[m] == 1)
            {
                m++;
            }
            else
            {
                swap(arr[h], arr[m]);
                h--;
            }
        }

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
}