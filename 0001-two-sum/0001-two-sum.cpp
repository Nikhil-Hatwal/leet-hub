class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n=nums.size();
        int left=0;
        int right=n-1;

        vector<vector<int>> elindex;
        for(int i=0;i<n;i++){
            elindex.push_back({nums[i],i});
        }
        sort(elindex.begin(),elindex.end());

        while(left<right){
            int sum=elindex[left][0]+elindex[right][0];
            if(sum==target){
                ans.push_back(elindex[left][1]);
                ans.push_back(elindex[right][1]);
                return ans;
            }
            else if(sum<target) left++;
            else right--;
        }
        return {-1,-1};
    }
};