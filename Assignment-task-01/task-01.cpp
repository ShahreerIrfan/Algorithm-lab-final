#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Index no: ";
    cin >> k;
    sort(arr, arr + n);

    int modified[n];
    int x = 0, r = k;
    while (x < n)
    {
        if (r >= n)
        {
            r = 0;
        }
        modified[r] = arr[x];
        r++;
        x++;
    }

    cout << "Modified array: ";
    for (int i = 0; i < n; i++)
    {
        cout << modified[i] << " ";
    }
    return 0;
}