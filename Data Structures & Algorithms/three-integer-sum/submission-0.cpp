class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>result;
        for(size_t i = 0; i <nums.size(); i++)
        {
            if(i > 0 && nums[i] == nums [i-1 ]) continue;
            for(size_t j = i + 1; j <nums.size(); j++)
            {
                if(j > i + 1 && nums[j] == nums [j-1]) continue;
                for(size_t k = j + 1; k <nums.size(); k++)
                {
                    
                    if(k > j + 1 && nums[k] == nums [k-1]) continue;

                    if(nums[i] + nums[j] + nums[k] == 0)
                    result.push_back({nums[i], nums[j], nums[k]});
                }
            }
           
        }
        return result;
    }
};
