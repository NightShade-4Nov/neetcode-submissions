class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>result;
        for(size_t i = 0; i < nums.size(); i++)
        {
            if(i > 0 && nums[i] == nums[i-1]) continue;

            int left = i + 1;
            int right = nums.size() - 1;
            while(left < right)
            {
                bool dupRight = true;
                bool dupLeft = true;
                while(!dupRight)
                {
                    if(right < nums.size() - 1 && nums[right] == nums[right+1])
                        right--;
                    else
                        dupRight = false;
                }
                 while(!dupLeft)
                {
                    if(left > i + 1 && nums[left] == nums[left - 1])
                        left++;
                    else
                        dupLeft = false;
                }
                int sum = nums[left] + nums[i] + nums[right];
                if(sum < 0)
                    left++;
                else if (sum > 0)
                    right--;
                else 
                {
                    if(right < nums.size() - 1 && nums[right] == nums[right+1])
                    {
                        right--;
                        continue;
                    }
                    if(left > i + 1 && nums[left] == nums[left - 1])
                    {
                        left++;
                        continue;
                    }
                    result.push_back({nums[left], nums[i],nums[right]});
                    right--;
                    left++;   
                };
            }
        }
        return result;
    }
};
