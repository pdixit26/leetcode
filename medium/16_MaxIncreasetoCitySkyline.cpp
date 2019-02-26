In a 2 dimensional array grid, each value grid[i][j] represents the height of a building located there. We are allowed to increase the height of any number of buildings, by any amount (the amounts can be different for different buildings). Height 0 is considered to be a building as well. 

At the end, the "skyline" when viewed from all four directions of the grid, i.e. top, bottom, left, and right, must be the same as the skyline of the original grid. A city's skyline is the outer contour of the rectangles formed by all the buildings when viewed from a distance. See the following example.

What is the maximum total sum that the height of the buildings can be increased?

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid.size()?grid[0].size():0;
        vector<int> row(n,INT_MIN), col(n,INT_MIN);
        for(int i=0; i<n;i++)
        {
            for(int j=0; j<m; j++)
            {
                row[i] =  max(row[i], grid[i][j]);
                col[j] = max(col[j], grid[i][j]);
            }
        }
        int result = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0; j<m; j++)
            {
                result += min(row[i],col[j]) - grid[i][j];
            }
        }
        return result;
        
        
    }
};