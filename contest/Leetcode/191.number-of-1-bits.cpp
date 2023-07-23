/*
 * @lc app=leetcode id=191 lang=cpp
 *
 * [191] Number of 1 Bits
 */

// @lc code=start
class Solution {
public:
    int hammingWeight(uint32_t n) {
        string bit;
        int counter=0;
        std::bitset<32> binary(n);
        bit = binary.to_string();
        for(int i=0; i<bit.size();i++){
            if(bit.at(i) == '1'){
                counter ++;
            }
        }
        return counter;
    }
};
// @lc code=end

