class Solution {
public:
    string baseNeg2(int n) {
        if (n == 0) return "0";
        
        string result = "";
        while (n != 0) {
            int remainder = ((n % 2) + 2) % 2;  
            result += to_string(remainder);
            n = (n - remainder) / -2;
        }
        
        reverse(result.begin(), result.end());
        return result;
    }
};