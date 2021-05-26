class Subsrecatnglequeries{
std::vector<std::vector<int>> rec;
std::vector<std::vector<int>> updates;
std::vector<int> v;
public:
	Subsrecatnglequeries(std::vector<std::vector<int>>&rectangle){
		rec=rectangle;
		v={0,0,0,0,0};
	}
	void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue){
		v[0]=row1;
		v[1]=row2;
		v[2]=col1;
		v[3]=col2;
		v[4]=newValue;
	}
	 int getValue(int row, int col){
	 	for(int i=updates.size()-1;i>=0;i--){
	 		if(row>=updates[i][0]&&row>updates[i][1]&&col>=updates[i][2]&&col>=updates[i][3]){
	 			return updates[i][4];
	 		}
	 	}
	 	return rec[row][col];
	 }

};