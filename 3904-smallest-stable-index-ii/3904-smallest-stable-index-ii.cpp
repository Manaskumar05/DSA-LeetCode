class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        int n = nums.size();
        vector <int> right(n);

        right[n - 1] = nums[n - 1];

        for(int i = n - 2 ; i >= 0 ; i--) {
            right[i] = min(nums[i] , right[i + 1]);
        }
        
        int max = nums[0];
        for(int i = 0 ; i < n ; i++) {
            
            max = std::max(max , nums[i]);
            int min = right[i];

            int stability = max - min;
            if(stability <= k){
                return i;
            }
        }
        return -1;
    }
};