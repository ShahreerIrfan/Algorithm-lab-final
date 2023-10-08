#include <bits/stdc++.h>
using namespace std;
void even_rearenge(int arr[], int n)
{
    int array[n];
    int mid = (n / 2) - 1;
    int left = mid;
    int right = mid;
    array[mid] = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0)
        {
            left -= 1;
            array[left] = arr[i];
        }
        else
        {
            right += 1;
            array[right] = arr[i];
        }
    }
    cout << "Output is : ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}

void odd_rearenge(int arr[], int n)
{
    int array[n];
    int mid = n / 2;
    int left = mid;
    int right = mid;
    array[mid] = arr[n - 1];

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            left -= 1;
            array[left] = arr[i];
        }
        else
        {
            right += 1;
            array[right] = arr[i];
        }
    }
    cout << "Output is : ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter The length of array : ";
    cin >> n;
    cout << "Enthe an array of length " << n << ": ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    if (n % 2 == 0)
    {
        even_rearenge(arr, n);
    }
    else
    {
        odd_rearenge(arr, n);
    }
}