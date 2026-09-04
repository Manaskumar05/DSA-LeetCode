class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        

        for(auto it = nums.begin() ; it != nums.end() ; it++){
            int max = *max_element(nums.begin(),it + 1);
            int min = *min_element(it,nums.end());

            int stability = max - min;

            if(stability <= k){
                return it - nums.begin();
            }
        }

        return -1;
    }
};