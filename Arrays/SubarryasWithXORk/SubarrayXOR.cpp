#include <bits/stdc++.h>
using namespace std;
int subarraysWithSumK(vector < int > a, int b)
{
    int n = a.size(); 
    int xr = 0;
    unordered_map<int, int> mpp; //declaring the map.
    mpp[xr]++; //setting the value of 0.
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        xr = xr ^ a[i];
        int x = xr ^ b;
        cnt += mpp[x];
        mpp[xr]++;
    }
    return cnt;
}
