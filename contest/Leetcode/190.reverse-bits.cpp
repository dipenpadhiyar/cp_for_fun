/*
 * @lc app=leetcode id=190 lang=cpp
 *
 * [190] Reverse Bits
 */

// @lc code=start
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        string data;
        std::bitset<64> binary(n);
        data  = binary.to_string();
        std::reverse(data.begin(),data.end());
        n = std::bitset<32>(data).to_ulong();
        return n;
    }
};
// @lc code=end

