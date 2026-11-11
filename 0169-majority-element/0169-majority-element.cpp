class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i = 0 ; i < nums.size() ; i++) {
            mp[nums[i]]++;
        }
        int max = 0;
        int result = nums[0];

        for(auto x : mp){
            if(x.second > max) {
                max = x.second;
                result = x.first;
            }
        }
        return result;
    }
};