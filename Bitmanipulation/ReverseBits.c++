#include <bitset>
#include <string>

class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {
        std::bitset<32> bits(n);
        std::string s = bits.to_string();
        std::reverse(s.begin(), s.end());
        std::bitset<32> reversed_bits(s);
        return reversed_bits.to_ulong();
    }
};
