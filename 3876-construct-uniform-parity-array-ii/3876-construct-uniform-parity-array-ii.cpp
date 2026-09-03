class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minOdd = INT_MAX;

        for (int x : nums1) {
            if (x % 2 == 1)
                minOdd = min(minOdd, x);
        }

        for (int x : nums1) {
            if (x % 2 == 0 && minOdd != INT_MAX && x < minOdd)
                return false;
        }

        return true;
    }
};
// The idea is to make all numbers odd.

//  Find the smallest odd number.
//  Any even number smaller than this cannot subtract an odd number because there is no smaller valid element.
//  So if even < smallestOdd, return false.
//  Otherwise, return true.