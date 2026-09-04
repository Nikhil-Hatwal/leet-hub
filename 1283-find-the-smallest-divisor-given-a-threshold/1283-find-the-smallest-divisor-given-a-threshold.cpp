class Solution {
private:
    /* Helper function to find the
    summation of division values*/
    int sumByD(vector<int>& nums, int limit) {
        // Size of array
        int n = nums.size(); 
        
        // Find the summation of division values
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += ceil((double)(nums[i]) / (double)(limit));
        }
        return sum;
    }

public:
    // Function to find the smallest divisor
    int smallestDivisor(vector<int>& nums, int limit) {
        int n = nums.size();
        if (n > limit) return -1;
        
        // Initialize binary search bounds
        int low = 1, high = *max_element(nums.begin(), nums.end());

        // Apply binary search
        while (low <= high) {
            int mid = (low + high) / 2;
            if (sumByD(nums, mid) <= limit) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};