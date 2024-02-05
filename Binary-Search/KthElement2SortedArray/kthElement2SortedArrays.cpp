class Solution{
    public:
        int kthElement(int arr1[], int arr2[], int n, int m, int k)
        {
        if (n > m)
            return kthElement(arr2, arr1, m, n, k);
    
        int low = max(0, k - m), high = min(n, k);
    
        while (low <= high)
        {
            int cut1 = (high + low) >> 1;
            int cut2 = k - cut1;
            int l1, l2, r1, r2;
            l1 = (cut1 == 0) ? INT_MIN : arr1[cut1 - 1];
            l2 = (cut2 == 0) ? INT_MIN : arr2[cut2 - 1];
            r1 = (cut1 == n) ? INT_MAX : arr1[cut1];
            r2 = (cut2 == m) ? INT_MAX : arr2[cut2];
    
            if (l1 <= r2 && l2 <= r1)
            {
                return max(l1, l2);
            }
            else if (l1 > r2)
            {
                high = cut1 - 1;
            }
            else
            {
                low = cut1 + 1;
            }
        }
    
        return -1;
            
        }
          
};
