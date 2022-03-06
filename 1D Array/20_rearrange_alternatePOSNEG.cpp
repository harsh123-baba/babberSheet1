#include<iostream>
#include<algorithm>
using namespace std;

void rearrange(int *A, int n){
    int i = -1;
    for(int j = 0; j<n; j++){
        //all the positive number are at 1 side
        if(A[j]>0){
            i++;
            swap(A[i], A[j]);
        }
    }
    int neg = i+1;
    int pos = 0;
    while(pos<neg && neg<n && A[pos]>0){
        swap(A[pos], A[neg]);
        neg++;
        pos+=2;

    }
}


// first of all sb pos ko ya sb negtive ko ek side dal do
// the as your wish traverse and swap them to get desires arrayy
// also try to pos-neg pairs








int main(){
    int A[] = {-1, 2, 3,  4, -2, -3, -4};
    int n = sizeof(A)/sizeof(int);
    rearrange(A, n);
    for(int i =0; i<n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;

}