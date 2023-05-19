class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int a=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if((a^nums[i])==0)
            ans.push_back(nums[i]);
            a=nums[i];
        }
        
        return ans;
    }
};
            
           
