class Solution {
public:
    void setminus(vector<vector<int>>& matrix,int i,int j,int n, int m)
    {
        for(int k=0;k<n;k++)
        {
            if(matrix[k][j]!=0)
                matrix[k][j]=-8575;
        }
        for(int k=0;k<m;k++)
        {
            if(matrix[i][k]!=0)
                matrix[i][k]=-8575;
        }
    }

    void setZeroes(vector<vector<int>>& matrix) 
    {
        //  vector<pair<int,int>> v;
        // for(int i=0;i<matrix.size();i++)
        // {
        //     for(int j=0;j<matrix[i].size();j++)
        //     {
        //         if(matrix[i][j]==0)
        //             v.push_back(make_pair(i,j));
        //     }
        // }
        // for(int a=0;a<v.size();a++)
        // {
        //     int b=v[a].first,c=v[a].second;
        //     int i;
        //     for(i=0;i<matrix.size();i++)
        //     {
        //         matrix[i][c]=0;
        //     }
        //     for(int j=0;j<matrix[0].size();j++)
        //     {
        //         matrix[b][j]=0;
        //     }
        // }
       int n=matrix.size();
       int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    setminus(matrix,i,j,n,m);
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==-8575)
                {
                    matrix[i][j]=0;
                }
            }
        }
    }
    
    
};