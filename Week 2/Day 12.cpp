class Solution {
public:
    vector<int> getRow(int n) {
        vector<vector<int>> res;
        for(auto i=0;i<=n;++i)
        {
            res.push_back(vector<int>(i+1,1));
            for(auto j=1; j<i; ++j) res[i][j] = res[i-1][j-1] + res[i-1][j];
        }
        return res[n];
    }
};
