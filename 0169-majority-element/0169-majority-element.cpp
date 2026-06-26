class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int el;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                el=nums[i];
                count=1;
            }
            else if(el==nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        int rcount;
        for(int i=0;i<nums.size();i++){
            if(el==nums[i]){
                rcount++;
            }
            if(rcount>(nums.size()/2)){
                return el;
            }
        }
        return -1;
    }
};