class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int i,j,sum=0,z=0;
        vector<int> v;
        vector<int> v1;
        vector<int> v4;
        vector<int> v2;
        //map<int,int> m;
        for(i=0;i<mat.size();i++)
        {
            sum=0;
            for(j=0;j<mat[i].size();j++)
            {
                sum+=mat[i][j];
            }
            v.push_back(sum);
        }
        v2 = v;
        sort(v2.begin(),v2.end());
        // for(i=0;i<v2.size();i++)
        // {
        //     cout<<v2[i]<<" ";
        // }
        for(i=0;i<v2.size();i++)
        {
            for(j=0;j<v.size();j++)
            {
                if(v2[i]==v[j])
                {
                    v1.push_back(j);
                }
            }
                //z++;
        }
        for(i=0;i<v1.size();i++)
        {
            for(j=i+1;j<v1.size();j++)
            {
                if(v1[i]==v1[j])
                {
                    v1.erase(v1.begin()+j);
                    j--;
                }
            }
        }
        for(i=0;i<k;i++)
        {
            v4.push_back(v1[i]);
        }
        
        return v4;
    }
};
