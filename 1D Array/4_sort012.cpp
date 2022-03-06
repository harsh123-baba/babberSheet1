#include<iostream>
using namespace std;

void Swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;

}


void Sort012(int *A, int n){
    int mid =0;
    int l = 0;
    int h = n-1;
    while (mid<=h){
        if(A[mid]==0){
            swap(A[l], A[mid]);
            l++;
            mid++;
        }
        else if (A[mid]==2){
            swap(A[mid], A[h]);
            h--;
        }
        else{
            mid++;
        }

    }
    
}


int main(){

    int A[] = {1, 2, 0, 0 , 0, 1, 2, 2};
    int n = sizeof(A)/sizeof(A[0]);
    Sort012(A, n);
    for(int i = 0; i<n; i++){
        cout<<A[i]<<" ";
    }

}