#include<iostream>
using namespace std;
#include<vector>
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0;
        int j = matrix[0].size()-1;
        while(j>=0 && i<matrix.size()-1){
            if(matrix[i][j] > target){
                j--;
            }
            else if(matrix[i][j] < target){
                i++;
            }
            else if( matrix[i][j] == target){
                return true;
            }
        }
        return false;
    }
int main(){
    vector<vector<int>> v = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    cout<<searchMatrix(v, 3);
}