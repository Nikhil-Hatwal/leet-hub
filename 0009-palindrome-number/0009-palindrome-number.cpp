class Solution {
public:
    bool isPalindrome(int x) {
        long long rev_num=0;
        int dup=x;
        while(x>0){
            int s = x%10;
            x=x/10;
            rev_num=(rev_num*10)+s;
        }
        if(rev_num==dup) return true;
        else return false;
    }
};  