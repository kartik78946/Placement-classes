class Solution {
public:
    void dfs(vector<vector<int>> &v,int sr,int sc,int x,int newcolor)
    {
        if(sr<0 || sc<0 || sr>=v.size() ||sc>=v[0].size() || v[sr][sc]!=x)
        {
            return ;
        }
        v[sr][sc] = newcolor;
        dfs(v,sr+1,sc,x,newcolor);
        dfs(v,sr,sc+1,x,newcolor);
        dfs(v,sr-1,sc,x,newcolor);
        dfs(v,sr,sc-1,x,newcolor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
       int x = image[sr][sc];
        if(x!=newColor)
        dfs(image,sr,sc,x,newColor);
    return image;
    }
};
