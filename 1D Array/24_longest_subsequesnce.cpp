#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int sequence(vector<int> v){
    int n = v.size()-1;
    sort(v.begin(), v.end());
    int sequenceHere = 0;
    int seq = 0;

    for(int i =1; i<=n; i++){
        if(v[i]-v[i-1]==1){
            sequenceHere +=1;
            seq = max(seq, sequenceHere);
        }
        else if(v[i]-v[i-1] == 0){
            continue;
        }
        else{
            sequenceHere = 0;
        }    
        
    }
    return ++seq;

}


int main(){
    // vector<int> v= {2,6,1,9,4,5,3};
    vector<int> v = {1,9,3,10,4,20,2};
    cout<<sequence(v);

}