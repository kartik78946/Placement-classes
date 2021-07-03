class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int i,j,l=0,z,y;
        z = mat.size();
        cout<<z;
        y = mat[0].size();
        cout<<y;
        if(z*y!=r*c)
        {
            return mat;
        }
        else{
        vector<int> v;
        vector<int> k;
        vector<vector<int>> m;
        for(i=0;i<mat.size();i++)
        {
            for(j=0;j<mat[i].size();j++)
            {
                v.push_back(mat[i][j]);
            }
        }
        // for(i=0;i<v.size();i++)
        // {
        //     cout<<v[i];
        // }
        //cout<<v;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                k.push_back(v[l]);
                l++;
            }
            m.push_back(k);
            k.clear();
        }
        return m;
        }
    }
};
