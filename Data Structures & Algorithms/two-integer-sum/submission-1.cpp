class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        
        vector<int> v;
        for(int i =0; i<n ; i++){
            int sum = 0;
            for(int j =i+1; j <n ; j++){
                sum = nums[i] + nums[j];
                if(sum == target){
                    v.push_back(i);
                    v.push_back(j);
                }

            }
        }
        return v;
        
    }
};
