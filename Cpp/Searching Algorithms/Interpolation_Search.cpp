#include<bits/stdc++.h>
using namespace std;
int interpolationSearch(int arr[], int size, int x)   //can be used in case of sorted array
{
    int l = 0, h = (size - 1);
    while (l <= h && x >= arr[l] && x <= arr[h])
    {
        if (l == h)
        {
            if (arr[l] == x) return l;
            return -1;
        }
        int pos = l + (((double)(h - l) /
            (arr[h] - arr[l])) * (x - arr[l]));
        if (arr[pos] == x)
            return pos;
        if (arr[pos] < x)
            l = pos + 1;
        else
            h = pos - 1;
    }
    return -1;
}
int main()
{
    int arr[] = {4, 6, 14, 18, 23, 34, 56, 67, 74, 75, 80};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;
    int idx = interpolationSearch(arr, n, x);
    if (idx != -1)
        cout << "Element found at " << idx <<"th index;
    else
        cout << "Element not found in the array.";
    return 0;
}
