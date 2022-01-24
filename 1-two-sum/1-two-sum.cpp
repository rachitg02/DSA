class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j,s=nums.size();
        vector<int>ans;
        for(i=0;i<s;i++)
        {
            for(j=i+1;j<s;j++)
            {
                if((nums[i]+nums[j])==target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
};

