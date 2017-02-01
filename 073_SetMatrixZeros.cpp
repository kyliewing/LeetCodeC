//O(m+n)
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> rows={};
        vector<int> cols={};
        for (int i=0; i<matrix.size(); i++){
            for (int j=0; j<matrix[0].size(); j++){
                if (matrix[i][j]==0){
                    rows.push_back(i);
                    cols.push_back(j);
                }
            }
        }
        for (int i=0; i<matrix.size(); i++){
            for (int j=0; j<matrix[0].size(); j++){
                if (find(rows.begin(),rows.end(),i)!=rows.end() || find(cols.begin(),cols.end(),j)!=cols.end()){
                    matrix[i][j]=0;
                }
            }
            
        }
    }
};


class Solution{
public:
    void setZeroes(vector<vector<int>>& matrix){
        int cols0=1;
        int n=matrix.size();
        int m=matrix[0].size();
        for (int i=0; i<n; i++){
            if(matrix[i][0]==0){cols0=0;}
            for (int j=1; j<m; j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for (int i=n-1; i>=0; i--){
            for (int j=m-1; j>0; j--){
                if (matrix[i][0]==0||matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
            if (cols0==0){matrix[i][0]=0;}
        }
    }
};  // notice the ;







