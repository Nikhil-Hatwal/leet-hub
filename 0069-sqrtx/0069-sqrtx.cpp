class Solution {
public:
    int mySqrt(int x) {
        int low=1;
        int high=x;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long value=1LL*mid*mid;
            if(value<=(long long)x){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return high;
    }
};