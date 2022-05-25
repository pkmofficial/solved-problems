class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        if(nums.empty())return {};
        vector<int>ans;
        sort(begin(nums),end(nums));
        int count=0;
        int s = nums[count];
        for(int i=1;i<nums.size();i++){
            if ( nums[i]==nums[count] ) 
            {
                ans.push_back(nums[i]);
                s=nums[i];
                // if(i<nums.size())s=nums[i];
                // else break;
            }
            else
            {
                s = nums[i];
            }
            count++;
        }
        return ans;
    }
};