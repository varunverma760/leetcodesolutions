class Solution{
public:
	vector<int>running Sum(vector<int>&num)
	int n=num.size();
	vector<int>v(n,0);
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=nums[i];
	}
	v[n-1]=sum;
	for(int i=n-2;i>=0;i--){
		v[i]=v[i+1]-nums[i+1];
	}
	return v;

	
}