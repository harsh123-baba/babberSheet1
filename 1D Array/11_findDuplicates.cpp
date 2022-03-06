#include<iostream>
#include<unordered_map>
using namespace std;


unordered_map<int, int> findDuplicates(int *A, int n){
    unordered_map<int, int> m;
    for(int i = 0; i<n; i++){
        m[A[i]]++;
    }
    return m;
    
}

int main(){
    int A[] = {1, 2, 2, 2, 3, 4, 4, 4, 4};
    int n = sizeof(A)/sizeof(int);
    unordered_map<int,int> m =  findDuplicates(A, n);
    unordered_map<int, int> :: iterator it = m.begin();
    for(it = m.begin(); it!=m.end(); it++){
        if(it->second > 1){
            cout<<it->first<<endl;
        }
    }
}