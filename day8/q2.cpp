class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int i,j,min=INT_MAX,max=0,x=0,k=0;
        vector<int> v;
        vector<int> v3;
        vector<vector<int> > v2(matrix[0].size(), vector<int>(matrix.size(), 0));
        for(i=0;i<matrix.size();i++)
        {
            x = *min_element(matrix[i].begin(),matrix[i].end());
            v.push_back(x);
        }
        for(i=0;i<matrix.size();i++)
        {
            for(j=0;j<matrix[i].size();j++)
            {
                v2[j][i] = matrix[i][j];
            }
        }
        for(i=0;i<v2.size();i++)
        {
            x = *max_element(v2[i].begin(),v2[i].end());
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            if(i<v.size()-1)
            {
                if(v[i]==v[i+1])
                {
                    v3.push_back(v[i]);
                    break;
                }
            }
        }
        return v3;
    }
};
