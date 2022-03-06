#include<iostream>
#include<vector>
using namespace std;

vector<int> findCommon(int *A, int *B, int *C, int na, int nb, int nc){
    int i =0;
    int j = 0;
    int k = 0;
    int c;
    // int na = sizeof(A)/sizeof(int);
    // int nb = sizeof(B)/sizeof(int);
    // int nc = sizeof(C)/sizeof(int);
    vector<int> v;
    while(i<na && j<nb && k<nc){
        if(A[i] == B[j] && A[i]==C[k] && c!= A[i]){
            v.push_back(A[i]);
            c = A[i];
            i++;
            j++;
            k++;
        }

        // may cause TLE;
        // else if (A[i]<B[j] && B[j]<C[k]){
        //     i++;
        //     j++;
        // }
        // else if (A[i]<B[j] && C[k] < B[j]){
        //     k++;
        //     i++;
        // }
        // else if (C[k]<A[i] && B[j] < A[i]){
        //     k++;
        //     j++;
        // }
        // else if (C[k] > A[i] && B[j]>A[i]){
        //     i++;
        // }
        // else if (C[k] > B[j] && A[i]>B[j]){
        //     j++;
        // }
        // else if (A[i] > C[j] && B[j]>C[k]){
        //     k++;
        // }

        else{
            int m = min(A[i], min(B[j], C[k]));
            if(m==A[i]){i++;}
            if(m==B[j]){j++;}
            if(m==C[k]){k++;}

        }
    

    }
    return v;
}


int main(){
int A []= {1, 5, 10, 20, 40, 80};
int na = sizeof(A)/sizeof(A[0]);
int B[] = {6, 7, 20, 80, 100};
int nb = 5;
int C[] = {3, 4, 15, 20, 30, 70, 80, 120};
int nc = 8;
vector<int> v = findCommon(A, B, C, na, nb, nc);
for(int i = 0; i<v.size(); i++){
    cout<<v[i]<<" ";

}
cout<<endl;
}