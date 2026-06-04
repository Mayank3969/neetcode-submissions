class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> check;

        for(int i=0; i<nums.size();i++){
            int rev=target-nums[i];

            if(check.contains(rev))
                return {check[rev],i};
            else
                check[nums[i]]=i;
            
        }
        return {0,0};
    }
};
