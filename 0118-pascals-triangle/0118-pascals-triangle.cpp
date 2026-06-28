class Solution {
private:
    vector<int> function(int row){
        vector<int> ansrow;
        long long ans=1;
        ansrow.push_back(ans);
        for(int i=1;i<row;i++){
            ans=ans*(row-i);
            ans=ans/i;
            ansrow.push_back(ans);
        }
        return ansrow;
    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalresult;
        for(int row=1;row<=numRows;row++){
            pascalresult.push_back(function(row));
        }
        return pascalresult;
    }
};