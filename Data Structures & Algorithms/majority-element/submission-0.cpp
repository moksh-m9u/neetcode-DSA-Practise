class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for (int i=0; i<nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<pair<int,int>> vec;
        for(auto &it :mpp){
            vec.emplace_back(it.second,it.first);
        }
        sort(vec.rbegin(),vec.rend());
        return vec[0].second;
    }
};