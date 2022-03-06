#include<iostream>
using namespace std;

void Swap(int &a , int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;

}


int * Reverse(int *A,int i, int j ){
    // int i = 0;
    // int j = sizeof(A)/sizeof(int);
    while (i<j){
        Swap(A[i], A[j]);
        i++;
        j--;
    }
    return A;

}

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}

int main(){
    int A[] = {1, 2, 3};
    int n= sizeof(A)/sizeof(A[0]);
    int *B = Reverse(A, 0, n-1);
    // int n = sizeof(B)/sizeof(int);
    printArray(B, n);
    
}