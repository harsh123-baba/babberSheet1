#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int, int> m;
        int count = 0;
        for(int i = 0; i<n; i++){
            if(m.find(k-arr[i])!=m.end()){
                count+=m[k-arr[i]];
            }
            m[arr[i]]++;
        }
        return count;
}


int main(){
    int A[] = {1,5, 6, 8, 2, 4};
    int n = sizeof(A)/sizeof(int);
    cout<<getPairsCount(A, n, 6);

}