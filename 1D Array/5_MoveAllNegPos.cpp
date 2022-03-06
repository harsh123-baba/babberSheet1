#include<iostream>
using namespace std;

int * move(int*A, int n){
    int s = 0;
    int e = n-1;
    int i=s;
    int j=e;
    while(i<=j){
        
        if(A[i]<0){
            i++;
        }
        if(A[j] >= 0){
            j--;
        }
        else{
            swap(A[i], A[j]);
            i++;
            j--;
        }
    }
    return A;
}


int main(){
    int A[] = {0, -1, 15, -6, 4, -5};
    int n = sizeof(A)/sizeof(A[0]);
    int *B = move(A, n);
    for(int i = 0; i<n; i++){
        cout<<B[i]<<" ";
    }
}