Leetcode 165:
Compare two version numbers version1 and version2.
If version1 > version2 return 1; if version1 < version2 return -1;otherwise return 0.

You may assume that the version strings are non-empty and contain only digits and the . character.

Solution:

class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i=0, j=0;
        int num1 = 0, num2 = 0;
        while(i<version1.size()||j<version2.size())
        {
           while(i<version1.size() && version1[i]!='.')
           {
               num1 = num1*10 + (version1[i] - '0');
               i++;
           }
            
            while(j<version2.size() && version2[j]!='.')
           {
               num2 = num2*10 + (version2[j] - '0');
               j++;
           }
            if(num1>num2) return 1;
            else if(num1<num2) return -1;
            
            num1 =  num2 = 0;
            i++; j++;
        }
       return 0; 
    }
};