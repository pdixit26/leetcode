Given a non-empty 2D array grid of 0's and 1's, an island is a group of 1's (representing land) connected 4-directionally (horizontal or vertical.) You may assume all four edges of the grid are surrounded by water.

Find the maximum area of an island in the given 2D array. (If there is no island, the maximum area is 0.)

class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int maxArea = 0;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[0].size(); j++)
            {
                if(grid[i][j] == 1)
                    maxArea = max(maxArea, DFS(grid, i,j));
            }
        }
        return maxArea;
        
    }
    
    int DFS(vector<vector<int>>& grid, int i, int j)
    {
        if(i>= grid.size() || i<0 || j< 0 || j>= grid[0].size() || grid[i][j] == 0)
            return 0;
        grid[i][j] = 0;
        int count = 1;
        count += DFS(grid, i-1, j);
        count += DFS(grid, i+1, j);
        count += DFS(grid, i, j-1);
        count += DFS(grid, i, j+1);
        return count;
    }
};