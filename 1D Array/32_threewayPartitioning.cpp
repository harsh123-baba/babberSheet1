// Three way partitioning 
// Given an array of size n and a range [a, b]. The task is to partition the array around the range such that array is divided into three parts.
// 1) All elements smaller than a come first.
// 2) All elements in range a to b come next.
// 3) All elements greater than b appear in the end.
// The individual elements of three sets can appear in any order. You are required to return the modified array.


// Example 1:

// Input: 
// n = 5
// A[] = {1, 2, 3, 3, 4}
// [a, b] = [1, 2]
// Output: 1
// Explanation: One possible arrangement is:
// {1, 2, 3, 3, 4}. If you return a valid
// arrangement, output will be 1.

#include<iostream>
#include<vector>
using namespace std;


void threeWayPartition(vector<int> &arr, int a, int b)
{
    // code here
    int mid = 0;
    int low = 0;
    int high = arr.size() - 1;
    while (mid <= high)
    {
        if (arr[mid] < a)
        {
            swap(arr[low++], arr[mid++]);
        }
        else
        {
            if (arr[mid] > b)
            {
                swap(arr[mid], arr[high]);
                // mid++;
                high--;
            }
            else
            {
                mid++;
            }
        }
    }
}