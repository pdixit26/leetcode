Given an array of strings, group anagrams together.

Example:

Input: ["eat", "tea", "tan", "ate", "nat", "bat"],
Output:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      vector<vector<string>> result;
      map<string, vector<string>> anagramFreq;
        int i=0;
      for(auto str:strs)
      {
          sort(str.begin(), str.end());
          anagramFreq[str].push_back(strs[i++]);
      }
      for(auto n:anagramFreq)
      {
          result.push_back(n.second);
      }
        return result;
    }
};