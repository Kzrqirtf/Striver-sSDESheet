#include <bits/stdc++.h>
using namespace std;

long long merge(vector<long long>& arr, long long low, long long mid, long long high)
{
    vector<long long> temp;
    long long left = low;
    long long right = mid + 1;
    long long cnt = 0;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left++]);
        }
        else
        {
            temp.push_back(arr[right]);
            cnt += (mid - left + 1);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left++]);
    }
    while (right <= high)
    {
        temp.push_back(arr[right++]);
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
    return cnt;
}

long long mergeSort(vector<long long>& arr, long long low, long long high)
{
    long long cnt = 0;
    if (low >= high)
        return cnt;
    long long mid = (low + high) / 2;
    cnt += mergeSort(arr, low, mid);
    cnt += mergeSort(arr, mid + 1, high);
    cnt += merge(arr, low, mid, high);
    return cnt;
}

long long getInversions(long long *arr, int n)
{
    long long a = 0, b = n;
    vector<long long> vec(arr, arr + n);
    return mergeSort(vec, a, b - 1);
}
