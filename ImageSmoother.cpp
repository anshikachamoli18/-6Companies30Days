class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m=img.size();
        int n=img[0].size();
        vector<vector<int>>res(m,vector<int>(n,0));
        int dr[]={0,-1,0,1,-1,1,1,-1};
        int dc[]={-1,0,1,0,-1,-1,1,1};
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int sum=0,c=0;
                sum=sum+img[i][j];
                c++;
                for(int k=0;k<8;k++)
                {
                    int nr=i+dr[k];
                    int nc=j+dc[k];
                    if(nr>=0&&nr<m&&nc>=0&&nc<n)
                    {
                        sum=sum+img[nr][nc];
                        c++;
                    }
                }
                res[i][j]=sum/c;
            }
        }
        return res;
    }
};
