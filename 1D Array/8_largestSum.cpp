#include<iostream>
using namespace std;

int largerstSum(int *A,int n){
    int maxhere = A[0];
    int maxsofar = A[0];
    for(int i = 1; i<n; i++){
        maxhere = max(A[i], maxhere+A[i]);
        maxsofar = max(maxsofar, maxhere);

    }
return maxsofar;
}


int main(){
    int A[] = {3, 5, -9, 1, 3, -2, 3, 4, 7, 2, -9, 6, 3 , 1, -5, 4};
    int n = sizeof(A)/sizeof(int);
    int x = largerstSum(A, n);
    cout<<x<<endl;
}