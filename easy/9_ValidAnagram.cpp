Given two strings s and t , write a function to determine if t is an anagram of s.
Solution:
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        map<char, int> mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
            mp[t[i]]--;
        }
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]]!=0)
                return false;
            
        }
        
        return true;
    }
};