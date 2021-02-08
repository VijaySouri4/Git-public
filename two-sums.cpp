class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int count1 = 0;
        int count2 = 0;
        vector<int> ans;
        for(auto& x : nums){
            for(auto& y : nums){
                
             if (x + y == target){
                 ans.push_back(count1);
                 ans.push_back(count2);
                 return ans;
             }   
                count2++;
            }
            count1++;
        }
        return ans;
    }
};