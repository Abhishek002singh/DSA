class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int>result(nums.size());

        int xo = 0;
        for(int i: nums)
        {
            xo^=i;
        }

        int mask = ((1<<maximumBit)-1); // it gives the required size of the mask

        for(int i = 0;i<nums.size();i++)
        {
            int k = xo^mask;

            result[i] = k;

            xo^=nums[nums.size()-i-1];
        }

        return result;
    }
};