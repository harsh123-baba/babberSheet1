#include<vector>
#include<iostream>
using namespace std;

bool searchElement(vector<vector<int>>v, int k){
    int n = v.size();
    int m = v[0].size();
    int i = 0;
    int j = n-1;
    int largest=v[n-1][m-1];
    int smallest =v[0][0];

    if(k>largest || k<smallest){
        return false;
    } 
    while(i<n && j>=0){
        if(v[i][j]==k){
            return true;
        }
        else if(v[i][j]>k){
            j--;
        }
        else{
            i++;
        }
    }
    return false;
}


int main(){
    vector<vector<int>>v = { { 10, 20, 30, 40 },
                      { 15, 25, 35, 45 },
                      { 27, 29, 37, 48 },
                      { 32, 33, 39, 50 } };
    cout<<searchElement(v, 29);
}