 Backspace String Compare
Given two strings S and T, return if they are equal when both are typed into empty text editors. # means a backspace character.

Example 1:

Input: S = "ab#c", T = "ad#c"
Output: true
Explanation: Both S and T become "ac".

Solution:

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> sStack; 
        stack<char> tStack;
        for(int i=0;i<S.size();i++)
        {
            if(S[i] !='#')
                sStack.push(S[i]);
            else if(S[i] == '#' && !sStack.empty())
                sStack.pop();
                
        }
        for(int i=0;i<T.size();i++)
        {
            if(T[i] !='#')
                tStack.push(T[i]);
            else if(T[i] == '#' && !tStack.empty())
                tStack.pop();
                
        }
        
        while(!sStack.empty())
        {
            char cur = sStack.top();
            if(!tStack.empty() && tStack.top()!= cur)
                return false;
            sStack.pop();
            tStack.pop();
        }
        return sStack.empty()&&tStack.empty();
    }
};