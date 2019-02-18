You're given strings J representing the types of stones that are jewels, and S representing the stones you have.  Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.

Input: J = "aA", S = "aAAbbbb"
Output: 3

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        set<char> st(J.begin(),J.end());
        int count = 0;
        for(int i = 0;i<S.size(); i++)
        {
            if(st.find(S[i])!= st.end())
                count++;
        }
        return count;  
    }
};