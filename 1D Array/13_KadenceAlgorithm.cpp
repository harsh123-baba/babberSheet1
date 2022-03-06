#include<iostream>
#include<algorithm>
using namespace std;

long long kadanceAlgo(int A[], int n){
    long long maxSumhere =A[0];
    long long maxSumSoFar = A[0]; 
    long long x;
    for(int i = 1; i<n; i++){
        x = A[i];
        maxSumhere = max(x, x+maxSumhere);
        maxSumSoFar = max(maxSumSoFar, maxSumhere);
    }
    return maxSumSoFar;
}



int main(){
    int Arr[] = {1,2,3,-2,5};
    int n = sizeof(Arr)/sizeof(Arr[0]);
    cout<<kadanceAlgo(Arr, n)<<endl;   
}