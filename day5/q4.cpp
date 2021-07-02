class Solution {
public:
    int heightChecker(vector<int>& heights) {
       vector<int> v;
        v = heights;
        sort(v.begin(),v.end());
        int i,k=0;
        for(i=0;i<v.size();i++)
        {
            if(v[i]!=heights[i])
            {
                k++;
            }
        }
        return k;
    }
};
