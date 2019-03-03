class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
           if(i>0 && nums[i-1] == nums[i]) continue; //skip same result;
            int target = nums[i];
            int front = i+1;
            int back = nums.size()-1;
            while(front<back)
            {
                int sum  = nums[front]+nums[back];
                if(sum < target)
                    front++;
                else if(sum>target)
                    back--;
                else
                {
                    vector<int> triplet(3,0);
                    triplet[0] = nums[i];
                    triplet[1] = nums[front++];
                    triplet[2] = nums[back--];
                    result.push_back(triplet);
                    while(front<back && nums[front]==triplet[1])
                        front++;
                    while(front<back && nums[back]== triplet[2])
                        back--;
                }
            }
        }

        return result;
    }
};