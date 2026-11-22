class Solution {
    private:
    /* Function to count the number of 
    students required given the maximum 
    pages each student can read */
    int countStudents(vector<int>& nums, int pages) {
        // Size of array
        int n = nums.size();
        
        int students = 1;
        int pagesStudent = 0;
        
        for (int i = 0; i < n; i++) {
            if (pagesStudent + nums[i] <= pages) {
                // Add pages to current student
                pagesStudent += nums[i];
            } else {
                // Add pages to next student
                students++;
                pagesStudent = nums[i];
            }
        }
        return students;
    }
public:
    int splitArray(vector<int>& nums, int k) {
       int n = nums.size();
        
        // Book allocation impossible
        if (k > n) return -1;
 
        // Calculate the range for binary search
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
 
        // Binary search for minimum maximum pages
        while (low <= high) {
            int mid = (low + high) / 2;
            int students = countStudents(nums, mid);
            if (students > k) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return low;
    }
};