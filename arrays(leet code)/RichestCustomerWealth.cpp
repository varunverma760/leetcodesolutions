class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum = INT_MIN;
        for(int i=0 ; i<accounts.size() ; i++)
        {
            int curr_sum = 0;
            for(int j=0 ; j<accounts[i].size() ; j++)
            {
                curr_sum += accounts[i][j];
                if(curr_sum > sum)
                {
                    sum = curr_sum;
                }
            }
        }
        return sum;
    }
};
