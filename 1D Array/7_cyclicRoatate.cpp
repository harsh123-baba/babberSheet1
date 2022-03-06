#include<iostream>
using namespace std;


void roatate(int *A, int m){
    int x = A[0];
    for(int i = 0; i<m; i++){
        A[i] = A[i+1];

    }
    A[m-1] = x;
    // return A;
}



int main(){
    int A[] = {1, 2, 3, 4, 5};
    int m = sizeof(A)/sizeof(int);
    roatate(A, m);
    for(int i = 0; i<m; i++){
        cout<<A[i]<<endl;
    }


}