class Solution{
public:
	vector<int>twosum(vector<int>&nums,int target){
		int a=0;
		int b=0;
		for(int i=0;i<nums.size()-1;i++){
			for(int j=0;j<nums.size()-1;j++){
				if(nums[i]+nums[j]==target){
					a=i;
					b=j;
				}
			}
		}
		return(a,b);
	}
};