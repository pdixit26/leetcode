Share
There is a robot starting at position (0, 0), the origin, on a 2D plane. Given a sequence of its moves, judge if this robot ends up at (0, 0) after it completes its moves.

Solution:
class Solution {
public:
    bool judgeCircle(string moves) {
        
        int UD = 0;
        int LR = 0;
        for(int i=0; i<moves.size();i++)
        {
            if(moves[i] == 'L')
                LR++;
            else if(moves[i] == 'R')
                LR--;
            else if(moves[i] == 'U')
                UD++;
            else if(moves[i] == 'D')
                UD--;
        }
        
        return (LR==0 && UD==0);
    }
};