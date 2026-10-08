class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        
        for(int i=0;i<nums.size();i++){
            int more = target - nums[i];
            if(mpp.find(more)!=mpp.end()){
                return{mpp[more]+1,i+1};
            }
            mpp[nums[i]] = i;

        }
        return {-1,-1};
    }
};
