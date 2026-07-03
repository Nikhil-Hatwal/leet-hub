class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int el1;
        int el2;
        int count1=0;
        int count2=0;
        for(int i=0;i<nums.size();i++){
            if(count1==0 && nums[i]!=el2){
                count1=1;
                el1=nums[i];
            }
            else if(count2==0 && nums[i]!=el1){
                count2=1;
                el2=nums[i];
            }
            else if(el1==nums[i]){
                count1++;
            }
            else if(el2==nums[i]){
                count2++;
            }
            else {
                count1--;
                count2--;
            }
        }
        int rcount1=0;
        int rcount2=0;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(el1==nums[i]){
                rcount1++;
            }
            else if(el2==nums[i]){
                rcount2++;
            }
        }
        if(rcount1>(nums.size()/3)){
            ans.push_back(el1);
        }
        if(rcount2>(nums.size()/3)){
            ans.push_back(el2);
        }
        return ans;
    }
};