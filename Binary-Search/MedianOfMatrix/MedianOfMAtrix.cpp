int countSmallerThanMid(vector<int> &row, int mid)
{
  int l = 0, h = row.size() - 1;
  while (l <= h)
  {
    int md = (l + h) >> 1;
    if (row[md] <= mid)
    {
      l = md + 1;
    }
    else
    {
      h = md - 1;
    }
  }
  return l;
}
int median(vector<vector<int>> &A, int m, int n) {
    // int a=m*n;
    // vector<int> arr;
    // for(auto i=0;i<m;i++)
    // {
    //     for(auto j=0;j<n;j++)
    //     {
    //         arr.push_back(matrix[i][j]);
    //     }
    // }
    // sort(arr.begin(),arr.end());
    // return arr[a/2];
    int low = 1;
    int high = 1e9;
    while (low <= high)
    {
        int mid = (low + high) >> 1;
        int cnt = 0;
        for (int i = 0; i < m; i++)
        {
        cnt += countSmallerThanMid(A[i], mid);
        }
        if (cnt <= (n * m) / 2)
        low = mid + 1;
        else
        high = mid - 1;
    }
    return low;
}
