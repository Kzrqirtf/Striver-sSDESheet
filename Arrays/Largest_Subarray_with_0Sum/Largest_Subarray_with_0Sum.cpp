class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   int maxi=0;
        int sum=0;
        int count=0;
        unordered_map<int,int>hashmap;
        for(int i=0;i<n;i++)
        {
            sum+=A[i];
            if(sum==0)
                maxi=i+1;
            if(hashmap.find(sum)==hashmap.end())
                hashmap[sum]=i;
            else
                maxi=max(maxi,i-hashmap[sum]);
        }
        return maxi;
    }
};
