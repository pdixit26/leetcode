Given an 2D board, count how many battleships are in it. The battleships are represented with 'X's, empty slots are represented with '.'s. You may assume the following rules:
You receive a valid board, made of only battleships or empty slots.
Battleships can only be placed horizontally or vertically. In other words, they can only be made of the shape 1xN (1 row, N columns) or Nx1 (N rows, 1 column), where N can be of any size.
At least one horizontal or vertical cell separates between two battleships - there are no adjacent battleships.
Example:
X..X
...X
...X
In the above board there are 2 battleships.


class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int numBS = 0;
        for(int i=0; i<board.size(); i++)
        {
            for(int j=0;j<board[0].size(); j++)
            {
                if(board[i][j] == 'X')
                {
                    numBS++;
                    DFS(board,i,j);
                }
            }
        }
        return numBS;
        
    }
    void DFS(vector<vector<char>>& board, int i, int j)
    {
        if(i<0 || i>= board.size() || j<0 || j >= board[0].size() || board[i][j] != 'X')
            return;
        board[i][j] = '.';
        DFS(board, i, j+1);
        DFS(board, i, j-1);
        DFS(board, i+1, j);
        DFS(board, i-1, j);
        
    }
};
