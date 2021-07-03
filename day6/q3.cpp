class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int i,count=0,finals=0,j;
        for(i=0;i<grid.size();i++)
        {
            
            for(j=0;j<grid[i].size();j++)
            {
                count=0;
                if(grid[i][j]==1){
                    //count=0;
                if(i-1>=0){
                if(grid[i-1][j]==1)
                {
                   count++;
                }
                }
                if(j-1>=0){
                if(grid[i][j-1]==1)
                {
                    count++;
                }
                }
                if(i+1<grid.size()){
                if(grid[i+1][j]==1)
                {
                    count++;
                }
                }
                if(j+1<grid[i].size()){
                if(grid[i][j+1]==1)
                {
                    count++;
                }
                }
                    finals = finals+(4-count);
                }
                
            }
        }
        return finals;
    }
};
