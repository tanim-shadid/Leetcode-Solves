class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        long long ans=0;
        for(int i=0;i<32;i++)
        {
            //int bit=n&(1<<i);
           int bit = (n >> i) & 1;
            ans+=(bit<<(31-i));
        }
        return ans;
    }
};
