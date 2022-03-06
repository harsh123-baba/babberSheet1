#include<iostream>
using namespace std;

int * intersection(int *A, int *B, int m, int n){
    int *c = new int[m+n];
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<m && j<n){
        if(A[i] < B[j]){
            i++;
        }
        else if (B[j]<A[i]){
            j++;
        }
        else{
            c[k++] = A[i++];
            j++;
        }

    }
    return c;
}

int* ToUnion(int *A, int*B, int m, int n){
    int *c = new int[m+n];
    int i = 0;
    int j = 0;
    int k = 0;
    while (i<m && j<n){
        if(A[i]<B[j]){
            c[k++] = A[i++];
        }
        else if (A[i] > B[j]){
            c[k++] = B[j++];
        }
        else{
            c[k++] = A[i++];
            j++;
        }
    }
    while(i<m){
        c[k++] = A[i++];
    }
    while(j<n){
        c[k++] = A[j++];
    }
    return c;
}





int main(){
    int A[] = {1, 2, 3, 4, 5, 6, 7};
    int B[] = {2, 4, 5 };
    int m = sizeof(A)/sizeof(int);
    int n = sizeof(B)/sizeof(int);
    int *c = ToUnion(A, B, m, n);
    int l = sizeof(c)/sizeof(int);
    for(int i = 0; i<7; i++){
        cout<<c[i]<<endl;
    }
}