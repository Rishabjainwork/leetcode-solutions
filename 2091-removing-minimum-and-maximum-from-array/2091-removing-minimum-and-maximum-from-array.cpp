class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        auto n = nums.size();
        auto mini = min_element(nums.begin(),nums.end());
        auto maxi = max_element(nums.begin(),nums.end());
        vector<int> original = nums;
        int i1 = mini - nums.begin();
        int i2 = maxi - nums.begin();
        // sort(nums.begin(), nums.end());

        // int Maximum = nums[n - 1];
        // int Minimum = nums[0];

        // int i1 = 0, i2 = 0;

        // for (int i = 0; i < n; i++) {
        //     if (original[i] == Maximum)
        //         i2 = i;

        //     if (original[i] == Minimum)
        //         i1 = i;
        // }

        int case1 = max(i1, i2) + 1;
        int case2 = n - min(i1, i2);
        int case3 = min(i1, i2) + 1 + n - max(i1, i2);

        return min({case1, case2, case3});
    }
};