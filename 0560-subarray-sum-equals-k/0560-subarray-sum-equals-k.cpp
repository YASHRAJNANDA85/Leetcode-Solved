class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size();

        // Fix the starting point of the subarray
        for (int i = 0; i < n; i++) {
            int current_sum = 0;

            // Fix the ending point of the subarray and accumulate the sum
            for (int j = i; j < n; j++) {
                current_sum += nums[j];

                // Check if the current subarray sum equals k
                if (current_sum == k) {
                    count++;
                }
            }
        }

        return count;
    }
};