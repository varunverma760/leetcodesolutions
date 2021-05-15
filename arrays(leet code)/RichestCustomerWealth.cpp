class Solution{
public:
    int maximumWealth(std::vector<vector<int>>&account){
        int sum=INT_MIN;
        for(int i=0;i<account.size;i++){
            int curr_sum=0;
            for(int j=0;j<account[i].size;j++){
                curr_sum+=account[i][j];
                if(curr_sum>sum){
                    curr_sum=sum;
                }

            }
        }
    }
    return sum;








};