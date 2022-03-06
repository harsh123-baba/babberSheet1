// Minimum swaps and K together 
// Given an array arr of n positive integers and a number k. One can apply a swap operation on the array any number of times, i.e choose any two index i and j (i < j) and swap arr[i] , arr[j] . Find the minimum number of swaps required to bring all the numbers less than or equal to k together, i.e. make them a contiguous subarray.

// Example 1:

// Input : 
// arr[ ] = {2, 1, 5, 6, 3} 
// K = 3
// Output : 
// 1
// Explanation:
// To bring elements 2, 1, 3 together,
// swap index 2 with 4 (0-based indexing),
// i.e. element arr[2] = 5 with arr[4] = 3
// such that final array will be- 
// arr[] = {2, 1, 3, 6, 5}
#include<vector>
#include<iostream>
using namespace std;


int minSwap(int arr[], int n, int k) {
        // Complet the function
        int bad = 0;
        int count = 0;
        int minSwap = INT32_MAX;
        for(int i = 0; i<n; i++){
            if(arr[i] <= k ){
                count++;
            }
        }
        for(int i = 0; i<count; i++){
            if(arr[i]> k){
                bad++;
            }
        }
        int j;
        minSwap = bad;
        for(int i = 0,j = count; j<n; ++j, ++i){
            if(arr[i] > k){
                --bad;
            }
            if(arr[j] > k){
                ++bad;
            }
            minSwap = min(minSwap, bad);
            
        }
    return minSwap;
    }


int main(){
    int A[] = {2, 1, 5, 6, 3};
    minSwap(A, 5, 3);

}