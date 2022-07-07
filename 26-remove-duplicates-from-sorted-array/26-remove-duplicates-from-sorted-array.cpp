class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1,j=0;
        while(i<nums.size())
        {
            if(nums[i]!=nums[i-1])
            {
                j++;
                nums[j]=nums[i];
                i++;
            }
            else {
                i++;
            }
        }
        return j+1;
    }
};