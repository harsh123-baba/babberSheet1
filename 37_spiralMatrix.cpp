#include<iostream>
#include<vector>
using namespace std;

void spiralTraversal(vector<vector<int>> v){
    int sc = 0;
    int ec = v[0].size()-1;
    int sr = 0;
    int er = v.size()-1;
    int d = 0;
    while(sc<=ec && sr<=er){
        if(d==0){
            for(int i = sc; i<=ec; i++){
                cout<<v[sr][i]<<" ";
                
            }
            sr++;
            d=1;
        }
        else if(d==1){
            for(int i = sr; i<=er; i++){
                cout<<v[i][ec]<<" ";
                
            }
            ec--;
            d=2;
        }
        else if(d == 2){
            for(int i = ec; i>=sc; i--){
                cout<<v[er][i]<<" ";
                
            }
            er--;
            d=3;
        }
        else if(d==3){
            for(int i = er; i>=sr; i--){
                cout<<v[i][sc]<<" ";
                
            }
            sc++;
            d=0;
        }

    }

}


int main(){
    vector<vector<int>>v = {{1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12}
           };
    spiralTraversal(v);

}