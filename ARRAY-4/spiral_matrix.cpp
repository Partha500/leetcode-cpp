#include <vector>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int srow=0, scol=0, erow=m-1, ecol=n-1 ;
        vector<int> array ;

        while((srow <= erow )&& (scol <= ecol)){
            // top 
            for(int j=scol; j<=ecol ;j++){
                 
                 array.push_back(matrix[srow][j]);
            }
            // right 
            for(int i=srow+1; i<= erow ; i++){
                
                array.push_back(matrix[i][ecol]);
            }
            //bottom
            for(int j=ecol-1; j>=scol; j--){
               if(srow==erow){
                break;
               }
                array.push_back(matrix[erow][j]);
            }
            //left
            for(int i=erow-1; i>=srow+1;i--){
                if(scol == ecol){
                    break;
                }
                array.push_back(matrix[i][scol]);
            }
            srow++;
            erow--;
            scol++;
            ecol--;
        }
        return array ;
    }
};
