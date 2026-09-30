class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]] = i;
        }
        for(int i=0;i<nums.size();i++){
            int more = target - nums[i];
            if(mpp.find(more) != mpp.end() && mpp[more] != i){
                return {i,mpp[more]};
            }
        }
        return {-1,-1};
    }
};
