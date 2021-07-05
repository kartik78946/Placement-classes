class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int i,j;
        vector<vector<int> > v(matrix[0].size(), vector<int>(matrix.size(), 0));
        for(i=0;i<matrix.size();i++)
        {
            for(j=0;j<matrix[i].size();j++)
            {
                v[j][i]=matrix[i][j];
            }
        }
        return v;
    }
};
