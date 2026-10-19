class Solution {
public:
    string removeOuterParentheses(string s) {
       string rem="";
        int balance=0;
        for(char c:s){
            if (c == '(') {
                if(balance>0) rem+=c;
                balance++;
            }
            else{
                balance--;
                if(balance>0) rem+=c;
            }
        }
        return rem;
    }
};
