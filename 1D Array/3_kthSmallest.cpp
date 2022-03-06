#include<iostream>
#include<queue>
#include<bits/stdc++.h>
using namespace std;
int kthSmallest(int *A, int n, int k){
    sort(A, A+n);
    return A[k-1];
}

bool cmp(int &a, int &b){
    return a > b;
}
int kthGreater(int *A, int n, int k){
    sort(A,A+n, cmp);
    return A[k-1];
}

int Ksmallest(int *A, int n, int k){
    priority_queue<int> p;

    for(int i = 0; i<n;i++){
        p.push(A[i]);
        if(p.size()>k){
            p.pop();
        }

    }
    return p.top();
}

int KLargest(int *A, int n, int k){
    priority_queue<int, vector<int>, greater<int>> p;

    for(int i = 0; i<n;i++){
        p.push(A[i]);
        if(p.size()>k){
            p.pop();
        }

    }
    return p.top();
}

int main(){
    // int A[] = {10, 5, 3, 2, 6, 11};
    int A[] = {7 ,10, 4, 20, 15};
    int n = sizeof(A)/sizeof(A[0]);
    // int small = kthSmallest(A, n, 4);
    // cout<<small<<endl;
    // int greater = kthGreater(A, n, 3);
    // cout<<greater<<endl;
    int k = Ksmallest(A, n, 4);
    cout<<k;
    int l = KLargest(A, n, 4);
    cout<<l;
}