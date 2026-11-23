class Solution {
    private:
    int countStudents(vector<int>& nums, int pages) {
        int n = nums.size();     
        int students = 1;
        int pagesStudent = 0;
        
        for (int i = 0; i < n; i++) {
            if (pagesStudent + nums[i] <= pages) {          
                pagesStudent += nums[i];
            } else {
                students++;
                pagesStudent = nums[i];
            }
        }
        return students;
    }
public:
    int splitArray(vector<int>& nums, int k) {
       int n = nums.size();
        if (k > n) return -1;
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
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