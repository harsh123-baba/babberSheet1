#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


vector<int> CommonElement(vector<vector<int>> v){
    vector<int> x;
    for(int i = 0; i<v.size(); i++){
        unordered_map<int, int> m;
        for(int j = 0; j<v[0].size(); j++){
            if(m[v[i][j]]){
                m[v[i][j]]++;
            }
            else{
                m[v[i][j]]=1;
            }
        }
        for(auto it = m.begin(); it!=m.end(); it++){
            if(it->second > 1){
                x.push_back(it->first);   
            }
        }
    }
    return x;
}


int main(){
    vector<vector<int>> v= {{1, 2, 1, 4, 8},
                            {3, 7, 8, 5, 1},
                            {8, 7, 7, 3, 3},
                            {8, 1, 2, 7, 9},
                            };
    vector<int> x = CommonElement(v);
    for(int i = 0; i<x.size(); i++){
        cout<<x[i]<<endl;
    }
}
