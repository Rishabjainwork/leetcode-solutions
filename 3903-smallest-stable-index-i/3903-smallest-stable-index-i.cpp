class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> boolean = nums;
        for (int i = 0; i < n; i++) {
            int stability = *max_element(nums.begin(), nums.begin() + i) -
                            *min_element(nums.begin() + i, nums.end());
            if (stability <= k) {
                boolean[i] = 1;
            } else
                boolean[i] = 0;
        }

        for (int i = 0; i < n; i++) {
            if (boolean[i] == 1)
                return i;
        }
        return -1;
    }
};