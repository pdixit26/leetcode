Given a 2d grid map of '1's (land) and '0's (water), count the number of islands. An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

Example 1:

Input:
11110
11010
11000
00000

Output: 1


Solution:
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        if(grid.empty())
            return 0;
        int M = grid.size();
        int N = grid[0].size();
        for(int i=0;i<M;i++)
        {
            for(int j=0;j<N; j++)
            {
                if(grid[i][j] == '1')
                {
                    count ++;
                    DFS(grid, i,j);
                }
            }
            
        }
        
        return count;
    }
    void  DFS(vector<vector<char>>& grid, int i, int j)
    {
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j] == '0')
            return ;
        grid[i][j] = '0';
        DFS(grid, i, j+1);
        DFS(grid, i, j-1);
        DFS(grid, i+1, j);
        DFS(grid, i-1, j);
    
    }
};