#include<iostream>
using namespace std;

void SpiralMatrix(int **A, int n, int m){
    int sr = 0;
    int sc =0;
    int er = n-1;
    int ec = m-1;
    int d = 0;
    while(sr<=er && sc<=ec){
        if(d=0){
            for(int i = sr; i<=er; i++){
                cout<<A[sc][i]<<" ";
            }
            sc++;
            d=1;
        }
        if(d=1){
            for(int i = sc; i<=ec; i++){
                cout<<A[i][er]<<" ";
            }
            er--;
            d=2;
        }
        if(d=2){
            for(int i = er; i>=sr; i--){
                cout<<A[ec][i]<<" ";
            }
            ec--;
            d=3;
        }
        // cout<<endl<<sr<<endl;
        if(d=3){
            for(int i = ec; i>=sc; i--){
                cout<<A[i][sr]<<" ";
            }
            sr++;
            d=0;
        }
    }

}

int main(){
    int n = 6;
    int x = 1;
    int m = 3;
    int **A = new int*[n];
    for(int i = 0; i<n; i++){
        A[i] = new int[m];
        for(int j=0; j<m; j++){
            A[i][j] = x++;
            // cout<<A[i][j]<<endl;
        }
    }
    SpiralMatrix(A, n, m);

}