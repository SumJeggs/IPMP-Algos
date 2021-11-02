#include <bits/stdc++.h>
using namespace std;

int getMissingNo(int a[], int n)
{
    int t = 1;

    for (int i = 0; i < (n - 1); i++)
    {
        t += i + 2;
        t -= a[i];
    }
    return t;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < (n - 1); i++)
        cin >> arr[i];
    cout << getMissingNo(arr, n);
}
