#include<iostream>
#include<algorithm>
using namespace std;



int getMinDiff(int arr[], int n, int k) {
    sort(arr,arr+n);
    int mind,maxd,ans=arr[n-1]-arr[0];
    for(int i=0;i<n-1;i++){
        if(arr[i+1]<k)
            continue;

        // we are serching for min and maximum size of pole
        // min is from left and maximum from right
        mind=min(arr[0]+k,arr[i+1]-k);
        maxd=max(arr[i]+k,arr[n-1]-k);
        ans=min(ans,maxd-mind);
    }
    return ans;
   }


int main(){
    // int A[] = {1,4, 6, 7, 2, 5};
    int A[] = {1, 5, 8, 10};
    int n = sizeof(A)/sizeof(int);
    cout<<getMinDiff(A, n, 2);

}