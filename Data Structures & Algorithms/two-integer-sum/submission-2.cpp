class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        
        unordered_map<int, int> m;

        for(int i = 0; i < n ; i++){
            int more_needed = target - nums[i];
            if(m.find(more_needed) != m.end()){
                return {m[more_needed] , i};
            }
            m[nums[i]] = i;
        }
       



    }
};
