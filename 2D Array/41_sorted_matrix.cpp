#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

vector<vector<int>> SortedMatrix(vector<vector<int>> v){
    vector<int> a(v.size()*v[0].size());
    int k = 0;
    for(int i = 0; i<v.size(); i++){
        for(int j = 0; j<v[0].size();j++){
            a[k++] = v[i][j];
        }
    }
    sort(a.begin(), a.end());
    k = 0;
    for(int i = 0; i<v.size(); i++){
        for(int j = 0; j<v[0].size(); j++){
            v[i][j] = a[k++];
        }
    }
    return v;
}

int main(){

}