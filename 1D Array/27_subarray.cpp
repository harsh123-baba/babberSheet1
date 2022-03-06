#include<iostream>
#include<unordered_map>
using namespace std;

bool SubArray(int A[], int s[], int n, int n1){
    unordered_map<int, int > m;
    for(int i = 0; i<n; i++){
        // if(m[A[i]]>0){
        //     m[A[i]]+=1;
        // }
        
        if(m[A[i]]>0){
            m[A[i]]+=1;
        }
        else{
            m[A[i]]=1;
        }
    }
    for(int i = 0; i<n1; i++){
        if(m[s[i]]!=0){
            continue;
        }
        else{
            return false;
            break;
        }
    }
    return true;
}

int main(){
    int A[] = {1, 2, 3, 4,5, 6, 7};
    int s[] = {2, 4, 8, 3};
    int n = sizeof(A)/sizeof(A[0]);
    int n1 = sizeof(s)/sizeof(s[0]);
    cout<<SubArray(A, s, n, n1);

}