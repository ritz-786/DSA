#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int low = 0, high = n - 1;
    while (low <= high)
    {
        if (arr[low] > 0 && arr[high] < 0)
        {
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
        else if (arr[low] < 0)
        {
            low++;
        }
        else if (arr[high] > 0)
        {
            high--;
        }
    }

    for (int x : arr)
        cout << x << " ";
}