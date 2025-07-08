class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();
        for(int i=1;i<m;i++){
            int j=i-1;
            while(j>=0){
                swap(matrix[j][i],matrix[i][j]);
                j--;
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<(m/2);j++){
                swap(matrix[i][j],matrix[i][m-j-1]);
            }
        }
       
    }
};
