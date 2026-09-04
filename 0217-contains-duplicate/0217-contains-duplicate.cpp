class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int,int> frequency;

        for(auto x : nums){
            frequency[x]++;
        }

        for(auto x : frequency){
            if(x.second > 1){
                return true;
            }
        }
        return false;
    }
};