class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int i;
        vector<int> v;
        v.push_back(first);
        for(i=0;i<encoded.size();i++)
        {
             v.push_back(encoded[i]^v[i]);
        }
        return v;
    }
};
