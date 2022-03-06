#include<iostream>
using namespace std;


struct Pair{
    int min;
    int max;

};

struct Pair maxMin(int *A, int n)
{
    struct Pair p;
    int min = INT32_MAX;
    int max = INT32_MIN;
    for(int i = 0; i<n; i++){
        if(A[i] > max){
            max = A[i];
        }
        if(A[i] < min){
            min = A[i];
        }

    }
    p.max = max;
    p.min = min;
    return p;

}
void findMinMax(int *A, int n){
    int min = INT32_MAX;
    int max = INT32_MIN;
    
    for(int i = 0; i<n;i++){
        if(A[i] < min){
            min = A[i];
        }
        if(A[i] > max){
            max = A[i];
        }
    }
    cout<<min<<" " <<max;
}

int main(){
    int A[] = {6, 100, 1200, 1};
    int n = sizeof(A)/sizeof(A[0]);

    // findMinMax(A, n);

    struct Pair p = maxMin(A, n);
    cout<<p.max<<" "<<p.min<<endl;

}