#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


int freqKtimes(int A[], int n, int k){
    unordered_map<int, int> m;
    if(k<2){
        return n;
    }
    for(int i = 0; i<n; i++){
        if(m[A[i]]>0){
            m[A[i]]++;
        }
        else{
            m[A[i]]=1;
        }
    }
    int count = 0;
    auto it = m.begin();
    for(it= m.begin(); it!=m.end(); it++){
        if(it->second >k){
            count++;
        }
    }
    return count;
}


int main(){
    int A[] = {1, 2, 3, 3,3 ,3, 3, 3,4, 4, 4};
    int n = sizeof(A)/sizeof(A[0]);
    cout<<freqKtimes(A, n, 2);
}