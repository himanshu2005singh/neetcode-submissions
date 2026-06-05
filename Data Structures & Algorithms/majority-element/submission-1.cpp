class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , int> mp;
        for(int i =0; i<n ; i++){
            mp[nums[i]]++;
        }
        int maxElement = 0;
        int maxCount = 0;
        for(auto it : mp){
            int currElement = it.first;
            int currCount = it.second;

            if(currCount > maxCount){
                maxCount = currCount;
                maxElement = currElement;
            }
        }
        return maxElement;
    }
};