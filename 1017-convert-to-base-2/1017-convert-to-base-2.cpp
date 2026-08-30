class Solution {
public:
    string baseNeg2(int n) {
        if (n == 0) return "0";
        
        string baseVal = "";

        while (n != 0) {
            int rem = n % 2 == 0? 0: 1;
            char remCh = '0' + rem;
            baseVal = baseVal + "" + remCh;

            n = (rem - n) / 2;
        }

        reverse(baseVal.begin(), baseVal.end());

        return baseVal;
    }
};