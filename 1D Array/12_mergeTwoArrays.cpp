#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;


void MergeTwoArray(vector<int> &a, vector<int> &b){
    vector<int> v;
    for(int i = 0; i<a.size(); i++){
        v.push_back(a[i]);
    }
    for(int i =0; i< b.size(); i++){
        v.push_back(b[i]);
    }
    sort(v.begin(), v.end());
    int i ;
    int k = 0;

    for( i = 0; i < a.size(); i++){
        a[i] = v[i];
    }
    int j = 0;
    for(k= a.size(); k<v.size(); k++){
        b[j++] = v[k];
    }
}




int main(){
    vector<int> A = {2, 4, 5, 6, 7, 8};
    vector<int> B = {3 , 9, 10, 12};
    MergeTwoArray(A, B);
    for(int i = 0; i<A.size(); i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    for(int j =0; j<B.size(); j++){
        cout<<B[j]<<" ";

    }
    cout<<endl;

}