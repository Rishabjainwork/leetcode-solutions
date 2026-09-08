class Solution {
public:
    int countCommas(int n) {
        int commas = n - 999 ; 
        if ( commas < 0 ){ 
            commas = 0 ; 
        }
        return commas;
    }
};