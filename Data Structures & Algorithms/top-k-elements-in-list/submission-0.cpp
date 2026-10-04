class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;

        }
        vector<pair<int,int>> v;
        for(auto it:mpp){
            v.push_back({it.first,it.second});
        }
        sort(v.begin(),v.end(),[](auto &a,auto &b){
            return a.second > b.second;
        });
        vector<int> ans;

        for(int i=0;i<k;i++){
            ans.push_back(v[i].first);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
