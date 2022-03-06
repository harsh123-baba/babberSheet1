#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;

// Brute force solution

int countInversion(int *A, int n){
    int count =0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i; j++){
            if(A[i] > A[j]){
                count++;
                swap(A[i], A[j]);
            }
        }
    }
    return count;

}


long long int inversionCount(long long arr[], long long N) {
       map <long long,long long> m;
       vector<long long> v;
       for(long long i = 0;i<N;i++){ 
           m[arr[i]] = i;
           v.push_back(arr[i]);
       }
       long long int out = 0;
       auto pos = m.begin(); 
       for(long long i=0;i<N;i++){
           if(v[i]!=pos->first){
               long long t = v[i];
               v[i] = pos->first;
               v[pos->second] = t;
                m[t] = pos->second;
               pos->second = i;
              out++;
           }
           pos++;
       }
       return out;        
   }

int main(){
    // int A[] = {5, 4, 3, 2, 1};
    long long A[] = {1, 3, 2};
    long long n = sizeof(A)/sizeof(A[0]);
cout<<inversionCount(A, n);
    // cout<<countInversion(A, n);    

}