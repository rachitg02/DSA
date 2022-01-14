class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int k=0;
        int n= nums.size();
        for(int i=0;i<2*n;i++)
        {
            ans.push_back(nums[(k++)%n]);
        }
        return ans;
    }
};