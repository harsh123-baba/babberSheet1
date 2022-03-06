// Smallest Subarray with sum greater than a given value


#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

int smallSubarray(int A[], int n, int x){
    int start = 0;
    int end = 0;
    int min_length = n+1;
    int currSum = 0;
    while (end < n){
        while(currSum<=x && end<n){
            currSum +=A[end];
            end++;
        }
        while(currSum > x &&start<n){
            if(end-start < min_length){
                min_length = end-start;
            }
            else{
                currSum-=A[start];
                start++;
            }
        }
        
    }
    return min_length;
}


int main(){
    // vector<int> v = {1,4, 45, 6, 0, 19};
    // cout<<smallSubarray(v, 51);
    int A[] = {1,4, 45, 6, 0, 19};
    int n = sizeof(A)/sizeof(A[0]);
    cout<<smallSubarray(A, n, 51);
}





