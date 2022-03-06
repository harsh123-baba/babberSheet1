#include<iostream>
#include<unordered_set>
using namespace std;

bool subArray(int A[], int n){
    int sum = 0;
    unordered_set<int> s;
    for(int i = 0; i<n; i++){
        sum +=A[i];
        if(sum == 0){
            return true;
        }
        else if(s.find(sum)!= s.end()){
            return true;
        }
        s.insert(sum);
    }
    return false;
}


int main(){

}