#include <iostream>
#include <vector>
using namespace std;

int Trapping(int arr[], int n)
{
    long long curr_big = arr[0];
    long long ans = 0, curr_ans = 0, upto = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < curr_big)
            curr_ans += curr_big - arr[i];
        else
        {
            curr_big = arr[i];
            ans += curr_ans;
            curr_ans = 0;
            upto = i;
        }
    }
    curr_big = arr[n - 1];
    for (int i = n - 2; i > upto; i--)
    {
        if (arr[i] > curr_big)
            curr_big = arr[i];
        else
            ans += curr_big - arr[i];
    }
    return ans;
}

int TrappingWaterAnuj(int arr[], int n){
    int *left = new int[n];
    int *right = new int[n];
    left[0] = arr[0];
    for(int i=1; i<n; i++){
        left[i] = max(arr[i], left[i-1]);
    }
    right[n-1] = arr[n-1];
    for(int i = n-2; i>=0; i--){
        right[i] = max(arr[i], right[i+1]);
    }
    int ans = 0;
    for(int i = 0; i<n; i++){
        int block = min(left[i], right[i]);
        ans += block - arr[i];
    }
    return ans;
}


// 7
// 8 8 2 4 5 5 1

int main()
{
    // int arr[] = {7,4,0,9};
    // int arr[] = {6, 9, 9};
    int arr [] = {3,0,0,2,0,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << Trapping(arr, n);
}